#ifndef PROFILCUSTOMER_H
#define PROFILCUSTOMER_H

#include <QWidget>
#include "mainwindow.h"
#include <QPushButton>
namespace Ui {
class profilCustomer;
}

class profilCustomer : public QWidget
{
    Q_OBJECT
    user *thisUser;
    userProfile *thisProfile;
    int cur_id, countObj;
    bool edit;
    QVector<QPushButton*> buttons;

public:
    explicit profilCustomer(user *thatUser, QWidget *parent = nullptr);
    ~profilCustomer();

private slots:
    void on_mini_clicked();
    void on_bazaar_clicked();
    void on_editBut_clicked();
    void on_img_clicked();
    void on_addBut_clicked();
    void openObj();
public slots:
    void activeWin();


signals:
    void closeMini();
private:
    Ui::profilCustomer *ui;
};

#endif // PROFILCUSTOMER_H
