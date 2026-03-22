#include "serverscannerdlg.h"
#include "ui_serverscanner.h"
#include <QDomDocument>
#include <QNetworkRequest>
#include <QMap>
#include "settings.h"
#include "appinfo.h"
#include "utilxml.h"

extern NonDefaultSettings* ttSettings;

ServerScannerDlg::ServerScannerDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServerScannerDlg)
{
    ui->setupUi(this);

    connect(&m_netMgr, &QNetworkAccessManager::finished, this, &ServerScannerDlg::slotNetworkReply);
    connect(ui->chkSaved, &QCheckBox::toggled, this, &ServerScannerDlg::slotFilterToggled);
    connect(ui->chkPublic, &QCheckBox::toggled, this, &ServerScannerDlg::slotFilterToggled);
    connect(ui->btnToggleAll, &QPushButton::clicked, this, &ServerScannerDlg::slotToggleAllClicked);
    connect(ui->serverListWidget, &QListWidget::itemChanged, this, &ServerScannerDlg::slotItemChanged);

    // Load local servers
    for(int i=0;;++i)
    {
        HostEntry entry;
        if(!getServerEntry(i, entry, false))
            break;
        
        HostEntryEx ex;
        ex.entry = entry;
        ex.type = ST_SAVED;
        addServerToList(ex);
    }

    slotFilterToggled(true);
}

ServerScannerDlg::~ServerScannerDlg()
{
    delete ui;
}

void ServerScannerDlg::addServerToList(const HostEntryEx& entryEx)
{
    for(const auto& item : m_servers)
    {
        if(item.entry.ipaddr == entryEx.entry.ipaddr && item.entry.tcpport == entryEx.entry.tcpport)
            return;
    }
    m_servers.append(entryEx);
}

void ServerScannerDlg::updateServerList()
{
    ui->serverListWidget->blockSignals(true);
    
    QMap<QString, Qt::CheckState> checkStates;
    for(int i = 0; i < ui->serverListWidget->count(); ++i)
    {
        QListWidgetItem* item = ui->serverListWidget->item(i);
        int idx = item->data(Qt::UserRole).toInt();
        if(idx >= 0 && idx < m_servers.size())
        {
            const HostEntry& entry = m_servers[idx].entry;
            checkStates[entry.ipaddr + ":" + QString::number(entry.tcpport)] = item->checkState();
        }
    }

    ui->serverListWidget->clear();
    for(int i = 0; i < m_servers.size(); ++i)
    {
        const HostEntryEx& ex = m_servers[i];

        bool show = false;
        if(ex.type == ST_SAVED && ui->chkSaved->isChecked()) show = true;
        else if(ex.type == ST_PUBLIC && ui->chkPublic->isChecked()) show = true;

        if(show)
        {
            QString text = ex.entry.name;
            if(ex.usercount > 0)
                text += QString(" (Users: %1)").arg(ex.usercount);
            if(!ex.motd.isEmpty())
                text += " - " + ex.motd;

            QListWidgetItem* item = new QListWidgetItem(text, ui->serverListWidget);
            item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
            
            QString key = ex.entry.ipaddr + ":" + QString::number(ex.entry.tcpport);
            item->setCheckState(checkStates.value(key, Qt::Unchecked));
            
            item->setData(Qt::UserRole, i);
            updateItemAccessibility(item);
        }
    }
    
    ui->serverListWidget->blockSignals(false);
    updateToggleButton();
}

void ServerScannerDlg::updateItemAccessibility(QListWidgetItem* item)
{
    if(!item) return;
    
    QString originalText = item->data(Qt::UserRole + 1).toString();
    if(originalText.isEmpty()) {
        originalText = item->text();
        item->setData(Qt::UserRole + 1, originalText);
    }
    
    QString state = (item->checkState() == Qt::Checked) ? tr("[Selected]") : tr("[Not Selected]");
    item->setText(state + " " + originalText);
}

void ServerScannerDlg::updateToggleButton()
{
    if(ui->serverListWidget->count() == 0)
    {
        ui->btnToggleAll->setText(tr("Select All"));
        ui->btnToggleAll->setEnabled(false);
        return;
    }

    ui->btnToggleAll->setEnabled(true);
    bool anyUnchecked = false;
    for(int i = 0; i < ui->serverListWidget->count(); ++i)
    {
        if(ui->serverListWidget->item(i)->checkState() == Qt::Unchecked)
        {
            anyUnchecked = true;
            break;
        }
    }

    if(anyUnchecked)
        ui->btnToggleAll->setText(tr("Select All"));
    else
        ui->btnToggleAll->setText(tr("Unselect All"));
}

void ServerScannerDlg::slotItemChanged(QListWidgetItem* item)
{
    updateItemAccessibility(item);
    updateToggleButton();
}

void ServerScannerDlg::slotFilterToggled(bool)
{
    for(int i = m_servers.size() - 1; i >= 0; --i)
    {
        if(m_servers[i].type == ST_PUBLIC)
            m_servers.removeAt(i);
    }

    if(ui->chkPublic->isChecked())
    {
        QUrl url(URL_FREESERVER(true, true, true));
        m_netMgr.get(QNetworkRequest(url));
    }
    
    updateServerList();
}

void ServerScannerDlg::slotToggleAllClicked()
{
    if(ui->serverListWidget->count() == 0) return;

    bool anyUnchecked = false;
    for(int i = 0; i < ui->serverListWidget->count(); ++i)
    {
        if(ui->serverListWidget->item(i)->checkState() == Qt::Unchecked)
        {
            anyUnchecked = true;
            break;
        }
    }

    Qt::CheckState newState = anyUnchecked ? Qt::Checked : Qt::Unchecked;
    
    ui->serverListWidget->blockSignals(true);
    for(int i = 0; i < ui->serverListWidget->count(); ++i)
    {
        QListWidgetItem* item = ui->serverListWidget->item(i);
        item->setCheckState(newState);
        updateItemAccessibility(item);
    }
    ui->serverListWidget->blockSignals(false);
    updateToggleButton();
}

QList<HostEntry> ServerScannerDlg::getSelectedServers() const
{
    QList<HostEntry> selected;
    for(int i = 0; i < ui->serverListWidget->count(); ++i)
    {
        QListWidgetItem* item = ui->serverListWidget->item(i);
        if(item->checkState() == Qt::Checked)
        {
            int index = item->data(Qt::UserRole).toInt();
            if(index >= 0 && index < m_servers.size())
                selected.append(m_servers[index].entry);
        }
    }
    return selected;
}

void ServerScannerDlg::slotNetworkReply(QNetworkReply* reply)
{
    if(reply->error() != QNetworkReply::NoError)
        return;

    QDomDocument doc;
    if(!doc.setContent(reply->readAll()))
        return;

    QDomElement root = doc.documentElement();
    QDomElement element = root.firstChildElement("host");
    
    while(!element.isNull())
    {
        HostEntryEx ex;
        if(getServerEntry(element, ex.entry))
        {
            ex.type = ST_PUBLIC;
            
            QDomElement stats = element.firstChildElement("stats");
            if(!stats.isNull())
            {
                ex.usercount = stats.firstChildElement("user-count").text().toInt();
                ex.motd = stats.firstChildElement("motd").text();
            }

            addServerToList(ex);
        }
        element = element.nextSiblingElement("host");
    }
    
    updateServerList();
}
