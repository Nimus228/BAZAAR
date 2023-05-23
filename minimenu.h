#ifndef MINIMENU_H
#define MINIMENU_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class miniMenu;
}

class miniMenu : public QWidget
{
    Q_OBJECT
    user *thisUser;
public:
    explicit miniMenu(user *thatUser, QWidget *parent = nullptr);
    ~miniMenu();

private slots:
    void on_exit_clicked();
    void on_pushButton_4_clicked();
    void on_message_clicked();
    void on_profil_clicked();

signals:
    void closeMain();
private:
    Ui::miniMenu *ui;
};

#endif // MINIMENU_H
