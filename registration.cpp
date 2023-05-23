#include "registration.h"
#include "ui_registration.h"
#include "mainwindow.h"
#include "mainscreen.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

registration::registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registration)
{
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\\s]*"), this);
    ui->setupUi(this);
    this->setWindowTitle("Регистрация");
    ui->log->setValidator(val);
    ui->pas->setValidator(val);
    ui->repeatPas->setValidator(val);
}

registration::~registration()
{
    delete ui;
}

void registration::on_LogIn_clicked()
{
    MainWindow *x = new MainWindow;
    x->show();
    this->close();
}


void registration::on_complete_clicked()
{
    ghost thisGhost;
    userProfile *thisProfile;
    QFile profile("C:/BAZAAR/BAZAAR/DB/profiles.txt");
    profile.open(QIODevice::ReadOnly | QIODevice::Text);
    int cur_id;
    while (!profile.atEnd()) {
        QString  line = profile.readLine();
        QStringList list = line.split('~');
        cur_id = list[0].toInt();
    }
    profile.close();
    QString log, pas, repeatPas;
    log = ui->log->text();
    pas = ui->pas->text();
    repeatPas = ui->repeatPas->text();
    user check = thisGhost.regist(log, pas, repeatPas, ui->typeBut->isChecked());
    if(check.ID_user != -1) {
        QStringList  nUserData = {QString::number(check.ID_user), check.log, check.type};
        mainscreen *x = new mainscreen(nUserData);
        thisProfile->createProfile(cur_id + 1, check.ID_user, "", 0, 1, "Расскажите о себе");
        x->show();
        this->close();
    }else{
        if (pas != repeatPas){
            QMessageBox::critical(this, "Ошибка","Пароли не совпадают. Попробуйте снова.");
        }else{
            QMessageBox::critical(this, "Ошибка","Такой пользователь уже существует. Попробуйте снова.");
        }
    }
}

