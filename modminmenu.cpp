#include "modminmenu.h"
#include "ui_modminmenu.h"
#include "mainwindow.h"
#include "profilemod.h"
#include "chat.h"
#include "reportview.h"
modMinMenu::modMinMenu(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modMinMenu)
{
    thisUser = thatUser;
    ui->setupUi(this);
    this->setWindowTitle("Мини-меню");
    ui->login->setText(thisUser->log);
}

modMinMenu::~modMinMenu()
{
    delete ui;
}

void modMinMenu::on_exit_clicked()
{
    exit(0);
}


void modMinMenu::on_change_clicked()
{
    MainWindow *x = new MainWindow;
    x->show();
    this->close();
    emit closeMain();
}


void modMinMenu::on_message_clicked()
{
    Chat *winChat = new Chat(thisUser);
    winChat->show();
    this->close();
    emit closeMain();
}


void modMinMenu::on_profil_clicked()
{
    profileMod *winProfilMod = new profileMod(thisUser);
    winProfilMod->show();
    this->close();
    emit closeMain();
}


void modMinMenu::on_report_clicked()
{
    reportView *openRepWin = new reportView(thisUser);
    openRepWin->show();
    this->close();
    emit closeMain();
}

