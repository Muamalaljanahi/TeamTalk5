#ifndef SERVERSCANNERDLG_H
#define SERVERSCANNERDLG_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QListWidgetItem>
#include "common.h"

namespace Ui {
class ServerScannerDlg;
}

class ServerScannerDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ServerScannerDlg(QWidget *parent = nullptr);
    ~ServerScannerDlg();

    QList<HostEntry> getSelectedServers() const;

private slots:
    void slotNetworkReply(QNetworkReply* reply);
    void slotFilterToggled(bool checked);
    void slotToggleAllClicked();
    void slotItemChanged(QListWidgetItem* item);

private:
    // Internal types for server state management
    enum ServerType {
        ST_SAVED  = 0x01,
        ST_PUBLIC = 0x02
    };

    struct HostEntryEx {
        HostEntry entry;
        int typeFlags = 0; // Bitmask: ST_SAVED | ST_PUBLIC
        int usercount = 0;
        QString motd;
    };

    // Helper methods
    void addServerToList(const HostEntryEx& entryEx);
    void updateServerList();
    void updateItemAccessibility(QListWidgetItem* item);
    void updateToggleButton();

    Ui::ServerScannerDlg *ui;
    QNetworkAccessManager m_netMgr;
    QList<HostEntryEx> m_servers;
};

#endif // SERVERSCANNERDLG_H
