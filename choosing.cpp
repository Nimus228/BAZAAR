#include "choosing.h"
#include "ui_choosing.h"
#include "modminmenu.h"
#include "minimenu.h"
#include "mainscreen.h"
#include <QLabel>
#include "profileview.h"
#include <QMessageBox>
choosing::choosing(user *thatuser, advertisement *thatAdv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choosing)
{
    thisUser = thatuser;
    thisAdv = thatAdv;
    ui->setupUi(this);
    this->setWindowTitle("выбор исполнителя");
    countExecu = 0;
    QFile deal("C:/BAZAAR/BAZAAR/DB/deal.txt");
    deal.open(QIODevice::ReadOnly | QIODevice::Text);
    QFile userName("C:/BAZAAR/BAZAAR/DB/users.txt");
    ui->scrollArea->setWidgetResizable( true );
    QWidget * container = new QWidget();
    ui->scrollArea->setWidget( container );
    ui->showCaseV = new QVBoxLayout(container);
    while (!deal.atEnd()) {
        QString  line = deal.readLine();
        QStringList list = line.split(' ');
        current = list[0].toInt();
        if ((list[3] == "ожидает") and (list[2].toInt() == thisAdv->ID_adv)){
            userName.open(QIODevice::ReadOnly | QIODevice::Text);

            buttonsProf.append(new QPushButton(container));
            buttonsAcc.append(new QPushButton(container));

            connect(buttonsProf[countExecu], &QPushButton::clicked, this, &choosing::openProf);
            connect(buttonsAcc[countExecu], &QPushButton::clicked, this, &choosing::acceptExe);

            buttonsProf[countExecu]->setObjectName(list[1]);//записываем ид юзера для отображения его профиля


            buttonsProf[countExecu]->setMinimumSize(QSize(130, 40));
            buttonsAcc[countExecu]->setMinimumSize(QSize(130, 40));

            buttonsProf[countExecu]->setStyleSheet("QPushButton {font-size: 16pt;}");
            buttonsAcc[countExecu]->setStyleSheet("QPushButton {font-size: 16pt;}");

            while (!userName.atEnd()) {
                QString  lineUser = userName.readLine();
                QStringList listUsr = lineUser.split(' ');
                if(list[1].toInt() == listUsr[0].toInt()){
                    buttonsAcc[countExecu]->setObjectName(list[0] + "~" + list[1]);
                    buttonsProf[countExecu]->setText("Исполнитель: " + listUsr[1]);
                    buttonsAcc[countExecu]->setText("Выбрать");
                    break;
                }
            }
            userName.close();
            QHBoxLayout *lay = new QHBoxLayout;
            lay->addWidget(buttonsProf[countExecu]);
            lay->addWidget(buttonsAcc[countExecu]);
            ui->showCaseV->addLayout(lay);
            countExecu++;
        }
    }
    userName.close();
    deal.close();
}

choosing::~choosing()
{
    delete ui;
}

void choosing::on_bazaar_clicked()
{
    QStringList list = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    mainscreen *screen = new mainscreen(list);
    emit closeMini();
    emit closeThis();
    this->close();
    screen->show();
}

void choosing::openProf()
{
    int id = sender()->objectName().toInt();
    QFile users("C:/BAZAAR/BAZAAR/DB/users.txt");
    users.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!users.atEnd()) {
        QString  line = users.readLine();
        QStringList list = line.split(' ');
        if  (id == list[0].toInt()) {
            userExecuter = new user(list[0].toInt(), list[1], list[3]);
            users.close();
        }
    }
    users.close();
    profileView *viewOpen = new profileView(userExecuter);
    connect(this, &choosing::closeThis, viewOpen, &profileView::close);
    viewOpen->show();
}

void choosing::acceptExe()
{
        QFile deal("C:/BAZAAR/BAZAAR/DB/deal.txt");
        deal.open(QIODevice::ReadWrite| QIODevice::Text);
        QTextStream writeStream(&deal);
        QStringList* writeList = new QStringList[current + 1];
        int count = 0;
        QString s = sender()->objectName();
        QStringList l = s.split("~");
        ID_deal = l[0].toInt();
        ID_user = l[1].toInt();
        QString sep = " ";
        while (!deal.atEnd()) {
            QString  line = deal.readLine();
            QStringList list = line.split(' ');
            if ((list[2].toInt() == thisAdv->ID_adv) and (list[1].toInt() == ID_user)){
                writeList[count].append(list[0]);
                writeList[count].append(list[1]);
                writeList[count].append(list[2]);
                writeList[count].append("принят");
                writeList[count].append(list[4]);
                writeList[count].append(list[5]);
                writeList[count].append(list[6]);
                writeList[count].append(list[7]);
            }else if ((list[2].toInt() == thisAdv->ID_adv) and (list[1].toInt() != ID_user)){
                writeList[count].append(list[0]);
                writeList[count].append(list[1]);
                writeList[count].append(list[2]);
                writeList[count].append("отклонен");//тут не всегда отклонен а только если у этого объявления пользователь не такой как выше
                writeList[count].append(list[4]);
                writeList[count].append(list[5]);
                writeList[count].append(list[6]);
                writeList[count].append(list[7]);
            }else{
                writeList[count].append(list[0]);
                writeList[count].append(list[1]);
                writeList[count].append(list[2]);
                writeList[count].append(list[3]);//тут не всегда отклонен а только если у этого объявления пользователь не такой как выше
                writeList[count].append(list[4]);
                writeList[count].append(list[5]);
                writeList[count].append(list[6]);
                writeList[count].append(list[7]);
            }
            count++;
        }
        deal.close();
        deal.remove();
        deal.open(QIODevice::WriteOnly | QIODevice::Text);
        for (int i = 0; i < count - 1; i++) {
            writeStream <<  writeList[i][0];
            writeStream << sep;
            writeStream << writeList[i][1];
            writeStream << sep;
            writeStream << writeList[i][2];
            writeStream << sep;
            writeStream << writeList[i][3];
            writeStream << sep;
            writeStream << writeList[i][4];
            writeStream << sep;
            writeStream << writeList[i][5];
            writeStream << sep;
            writeStream << writeList[i][6];
            writeStream << sep;
            writeStream << writeList[i][6];
            writeStream << "\n";
        }
        writeStream <<  writeList[count - 1][0];
        writeStream << sep;
        writeStream << writeList[count - 1][1];
        writeStream << sep;
        writeStream << writeList[count - 1][2];
        writeStream << sep;
        writeStream << writeList[count - 1][3];
        writeStream << sep;
        writeStream << writeList[count - 1][4];
        writeStream << sep;
        writeStream << writeList[count - 1][5];
        writeStream << sep;
        writeStream << writeList[count - 1][6];
        writeStream << sep;
        writeStream << writeList[count - 1][7];
        deal.close();
        QMessageBox::information(this, "Успех","Вы назначили исполнителя на своё объявление");
        emit closeThis();
        QStringList us = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
        mainscreen * mainOpen = new mainscreen(us);
        mainOpen->show();
        this->close();
}


void choosing::on_mini_clicked()
{

    if (ui->mini->isChecked()){
        if (thisUser->type == "m"){
            modMinMenu* menu = new modMinMenu(thisUser);
            menu->show();
            connect(menu, &modMinMenu::closeMain, this, &choosing::close);
            connect(this, &choosing::closeModMini, menu, &modMinMenu::close);
        }else{
            miniMenu* menu = new miniMenu(thisUser);
            menu->show();
            connect(menu, &miniMenu::closeMain, this, &choosing::close);
            connect(this, &choosing::closeMini, menu, &miniMenu::close);
        }
    }else{
        if (thisUser->type == "m"){
            emit closeModMini();
        }else{
            emit closeMini();
        }
    }
    emit closeThis();
}

