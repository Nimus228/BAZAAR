#include "chat.h"
#include "ui_chat.h"
#include "mainscreen.h"
#include "minimenu.h"
#include "modminmenu.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>
Chat::Chat(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\~]*"), this);
    thisUser = thatUser;
    ui->setupUi(this);
    this->setWindowTitle("Мессенджер");
    ui->writeMes->setValidator(val);
    countCha = 0;
    ID_aim = 0;
    QFile cha("C:/BAZAAR/BAZAAR/DB/chat.txt");
    cha.open(QIODevice::ReadOnly | QIODevice::Text);
    QFile userName("C:/BAZAAR/BAZAAR/DB/users.txt");
    ui->scrollArea->setWidgetResizable( true );
    QWidget * container = new QWidget();
    ui->scrollArea->setWidget( container );
    ui->showCaseV = new QVBoxLayout(container);
    while (!cha.atEnd()) {
        QString  line = cha.readLine();
        QStringList list = line.split(' ');
        current = list[0].toInt();

        if (list[3].toInt() == thisUser->ID_user){
            buttonsCha.append(new QPushButton(container));

            connect(buttonsCha[countCha], &QPushButton::clicked, this, &Chat::showMessage);

            buttonsCha[countCha]->setMinimumSize(QSize(130, 40));
            buttonsCha[countCha]->setMinimumSize(QSize(130, 40));

            buttonsCha[countCha]->setStyleSheet("QPushButton {font-size: 16pt;}");

            userName.open(QIODevice::ReadOnly | QIODevice::Text);
            while (!userName.atEnd()) {
                QString  lineUser = userName.readLine();
                QStringList listUsr = lineUser.split(' ');
                if (list[1].toInt() == listUsr[0].toInt()){
                    buttonsCha[countCha]->setText( listUsr[1] );
                     buttonsCha[countCha]->setObjectName( listUsr[0] + " " + listUsr[1] + " " + list[2] );
                    break;
                }
            }
            userName.close();

            QHBoxLayout *lay = new QHBoxLayout;
            lay->addWidget(buttonsCha[countCha]);
            ui->showCaseV->addLayout(lay);
            countCha++;
        }
    }
    userName.close();
    cha.close();
}

Chat::~Chat()
{
    delete ui;
}

void Chat::showMessage()
{
    cur_mes = 0;
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress::LocalHost, thisUser->ID_user);
    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(ReadingData()));

    ui->writeMes->setEnabled(true);
    ui->send->setEnabled(true);
    QStringList l = sender()->objectName().split(' ');
    QStringList message = l[2].split(",");
    ID_aim = l[0].toInt();
    nameAim = l[1];
    QFile mess("C:/BAZAAR/BAZAAR/DB/message.txt");
    mess.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!mess.atEnd()) {
        QString  lineMess = mess.readLine();
        QStringList listMess = lineMess.split('~');
        cur_mes++;
        for (int i = 0 ; i < message.size() ; i++){
            if (message[i] == listMess[0]){
                if (listMess[1].toInt() == thisUser->ID_user){
                    ui->writeStory->append( "ВЫ: ");
                }else{
                    ui->writeStory->append( l[1] + ": ");
                }
                ui->writeStory->append( listMess[2]);
            }
        }
    }
    mess.close();
}

void Chat::on_mini_clicked()
{
    if (ui->mini->isChecked()){
        if (thisUser->type == "m"){
            modMinMenu* menu = new modMinMenu(thisUser);
            menu->show();
            connect(menu, &modMinMenu::closeMain, this, &Chat::close);
            connect(this, &Chat::closeModMini, menu, &modMinMenu::close);
        }else{
            miniMenu* menu = new miniMenu(thisUser);
            menu->show();
            connect(menu, &miniMenu::closeMain, this, &Chat::close);
            connect(this, &Chat::closeMini, menu, &miniMenu::close);
        }
    }else{
        if (thisUser->type == "m"){
            emit closeModMini();
        }else{
            emit closeMini();
        }
    }
}


void Chat::on_bazaar_clicked()
{
    QStringList list = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    mainscreen *screen = new mainscreen(list);
    this->close();
    emit closeMini();
    emit closeModMini();
    screen->show();
}

void Chat::on_send_clicked()
{
    ui->writeStory->append("Вы: " + ui->writeMes->text());
    udpSocket->writeDatagram(ui->writeMes->text().toUtf8(), QHostAddress::LocalHost, ID_aim);

   QFile mess("C:/BAZAAR/BAZAAR/DB/message.txt");
    mess.open(QIODevice::Append | QIODevice::Text);
    QTextStream writeStream(&mess);
    QString sep = "~";
    writeStream << "\n";
    writeStream << cur_mes + 1;
    writeStream << sep;
    writeStream << thisUser->ID_user;
    writeStream << sep;
    writeStream << ui->writeMes->text().remove("\n");
    mess.close();
    cur_mes++;

    QFile cha("C:/BAZAAR/BAZAAR/DB/chat.txt");
    cha.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream writeStream1(&cha);
    QStringList q;
    QVector<QStringList> writeList;
    int count = 0;

    while (!cha.atEnd()){
        QString  lineCha = cha.readLine();
        QStringList listCha = lineCha.split(' ');
        if (((thisUser->ID_user  == listCha[3].toInt()) and ( ID_aim == listCha[1].toInt())) or ((thisUser->ID_user  == listCha[1].toInt()) and ( ID_aim == listCha[3].toInt()))){
            q = {listCha[0],  listCha[1], listCha[2] + "," + QString::number(cur_mes), listCha[3]};
            writeList.append(q);
            count++;
        }else{
            writeList.append(listCha);
            count++;
        }
        qDebug()<<writeList[count - 1];
    }

    cha.close();
    cha.remove();
    cha.open(QIODevice::WriteOnly | QIODevice::Text);
    sep =" ";
    for (int i = 0; i < count; i++) {
        writeStream1 <<  writeList[i][0];
        writeStream1 <<  sep;
        writeStream1 <<  writeList[i][1];
        writeStream1 <<  sep;
        writeStream1 <<  writeList[i][2];
        writeStream1 <<  sep;
        writeStream1 <<  writeList[i][3];
    }
    cha.close();
    ui->writeMes->setText(nullptr);
}

void Chat::ReadingData()
{
    QHostAddress sender;
    quint16 senderPort;
    while(udpSocket->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(datagram.data(), datagram.size(), &sender, &senderPort);
        ui->writeStory->append(nameAim + ": ");
        ui->writeStory->append(datagram.data());
    }
    cur_mes++;
}

