#ifndef SERVERSCANNERDLG_H
#define SERVERSCANNERDLG_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QListWidgetItem>
#include "common.h"
#include "utiltt.h"

namespace Ui {
class ServerScannerDlg;
}

class ServerScannerDlg : public QDialog
{
    Q_OBJECT

public:
    enum ServerType {
        ST_SAVED,
        ST_PUBLIC
    };

    struct HostEntryEx {
        HostEntry entry;
        ServerType type;
        int usercount = 0;
        QString motd;
    };

    explicit ServerScannerDlg(QWidget *parent = nullptr);
    ~ServerScannerDlg();

    QList<HostEntry> getSelectedServers() const;

private slots:
    void slotNetworkReply(QNetworkReply* reply);
    void slotFilterToggled(bool checked);
    void slotToggleAllClicked();
    void slotItemChanged(QListWidgetItem* item);

private:
    Ui::ServerScannerDlg *ui;
    QNetworkAccessManager m_netMgr;
    QList<HostEntryEx> m_servers;

    void addServerToList(const HostEntryEx& entryEx);
    void updateServerList();
    void updateItemAccessibility(QListWidgetItem* item);
    void updateToggleButton();
};

#endif // SERVERSCANNERDLG_H
