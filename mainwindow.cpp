#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainscreen.h"
#include "registration.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Авторизация");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exit_clicked()
{
    ghost thisGhost;
    user check = thisGhost.logIn(ui->log->text(), ui->pas->text());
    if (check.ID_user != -1){
        QStringList  nUserData = {QString::number(check.ID_user), check.log, check.type};
        mainscreen *x = new mainscreen(nUserData);
        x->show();
        this->close();
    }else{
        QMessageBox::critical(this, "Ошибка","Ошибка авторизации.\nПроверти правильно ли вы ввели логин и пароль и повторите попытку.\nВозможно ваш аккаунт заблокирован.");
    }
}

void MainWindow::on_reg_clicked()
{
    registration *x = new registration;
    x->show();
    this->close();
}

void MainWindow::on_pas_textEdited(const QString &arg1)
{
    if (ui->pas->echoMode() != QLineEdit::Password ){
        ui->pas->setText(arg1);
    }
    ui->pas->setEchoMode(QLineEdit::Password);
}

