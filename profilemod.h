#ifndef PROFILEMOD_H
#define PROFILEMOD_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class profileMod;
}

class profileMod : public QWidget
{
    Q_OBJECT
    user *thisUser;
    userProfile *thisProfile;
    int cur_id;
    bool edit;

public:
    explicit profileMod(user *thatUser, QWidget *parent = nullptr);
    ~profileMod();

private slots:
    void on_mini_2_clicked();

    void on_editBut_2_clicked();

    void on_bazaar_2_clicked();

    void on_img_2_clicked();
signals:
    void closeMini();
private:
    Ui::profileMod *ui;
};

#endif // PROFILEMOD_H
