#ifndef VIEWADV_H
#define VIEWADV_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class viewAdv;
}

class viewAdv : public QWidget
{
    Q_OBJECT
    user *thisUser;
    advertisement *thisAdv;
    int cur_id, ownerAdv_ID;

public:
    explicit viewAdv(user *thatUser, QString ID_adv, QWidget *parent = nullptr);
    ~viewAdv();

private slots:
    void on_cansell_clicked();
    void repButIsReady();
    void on_editOrP_clicked();
    void on_repOrCh_clicked();
    void choosEx();
    void on_writeCust_clicked();

public slots:
    void dealLook();

signals:
    void thisClose();
    void openChoose();
    void closeRep();
    void openChat();

private:
    Ui::viewAdv *ui;
};

#endif // VIEWADV_H
