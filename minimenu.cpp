#include "minimenu.h"
#include "ui_minimenu.h"
#include "mainwindow.h"
#include "chat.h"
#include "profilexecutor.h"
#include "profilcustomer.h"
miniMenu::miniMenu(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::miniMenu)
{
    thisUser = thatUser;
    ui->setupUi(this);
    this->setWindowTitle("Мини-Меню");
    ui->login->setText(thisUser->log);
}

miniMenu::~miniMenu()
{
    delete ui;
}

void miniMenu::on_exit_clicked()
{
    exit(0);
}

void miniMenu::on_pushButton_4_clicked()
{
    MainWindow *x = new MainWindow;
    x->show();
    this->close();
    emit closeMain();
}


void miniMenu::on_message_clicked()
{
    Chat *winChat = new Chat(thisUser);
    winChat->show();
    this->close();
    emit closeMain();
}


void miniMenu::on_profil_clicked()
{
    if (thisUser->type == "e"){
        profilExecutor *winProfilExecutor = new profilExecutor(thisUser);
        winProfilExecutor->show();
        this->close();
        emit closeMain();
    }else{
        profilCustomer *winProfilCustomer = new profilCustomer(thisUser);
        winProfilCustomer->show();
        this->close();
        emit closeMain();
    }

}

