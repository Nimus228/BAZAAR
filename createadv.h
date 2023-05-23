#ifndef CREATEADV_H
#define CREATEADV_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class createAdv;
}

class createAdv : public QWidget
{
    Q_OBJECT
    user *thisUser;
    advertisement *thisAdv;
public:
    explicit createAdv(user *thatUser, QWidget *parent = nullptr);
    ~createAdv();
signals:
    void thisClose();
private slots:
    void on_cansell_clicked();

    void on_savee_clicked();

    void on_img_clicked();

private:
    Ui::createAdv *ui;
};

#endif // CREATEADV_H
