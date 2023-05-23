#ifndef MODMINMENU_H
#define MODMINMENU_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class modMinMenu;
}

class modMinMenu : public QWidget
{
    Q_OBJECT
    user *thisUser;
public:
    explicit modMinMenu(user *thatUser, QWidget *parent = nullptr);
    ~modMinMenu();

private slots:
    void on_exit_clicked();
    void on_change_clicked();
    void on_message_clicked();

    void on_profil_clicked();

    void on_report_clicked();

signals:
    void closeMain();
private:
    Ui::modMinMenu *ui;
};

#endif // MODMINMENU_H
