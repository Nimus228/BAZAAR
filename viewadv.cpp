#include "viewadv.h"
#include "ui_viewadv.h"
#include <QFile>
#include <QFileDialog>
#include <QPixmap>
#include "report.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "choosing.h"
#include "chat.h"
viewAdv::viewAdv(user *thatuser, QString ID_adv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewAdv)
{
    cur_id = 0;
    ownerAdv_ID = 0;
    thisUser = thatuser;
    ui->setupUi(this);
    ui->writeCust->setEnabled(false);
    connect(this, &viewAdv::openChoose, this, &viewAdv::choosEx);
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\~\`]*"), this);
    QRegularExpressionValidator* val1 = new QRegularExpressionValidator(QRegularExpression("[^\\D]*"), this);
    ui->name->setValidator(val);
    ui->cost->setValidator(val1);
    ui->img->setText(nullptr);
    QFile adv("C:/BAZAAR/BAZAAR/DB/object.txt");
    adv.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!adv.atEnd()) {
        QString  line = adv.readLine();
        QStringList list = line.split('~');
        cur_id = list[0].toInt();
        if(list[0].toInt() == ID_adv.toInt()){
            thisAdv = new advertisement(list[0].toInt(), list[1].toInt(), list[2], list[3], list[4].toInt(), list[5].toInt());

            ownerAdv_ID = list[1].toInt();
            this->setWindowTitle(list[2]);
        }
    }
    if (thisUser->ID_user == thisAdv->ID_user){
        ui->editOrP->setText("Редактировать");
        ui->repOrCh->setText("Выбор Исполнителя");
        ui->repOrCh->setCheckable(false);

    }else{
        ui->editOrP->setText("ПРИНЯТЬ");
        ui->repOrCh->setText("Пожаловаться");
        ui->repOrCh->setCheckable(true);
        if (thatuser->type != "e"){
            ui->editOrP->setDisabled(true);
        }else{
            ui->editOrP->setDisabled(false);
            ui->writeCust->setEnabled(true);
        }
    }
    ui->name->setText(thisAdv->name);
    ui->description->setText(thisAdv->desc);
    ui->cost->setText(QString::number(thisAdv->cost));
    QFile img("C:/BAZAAR/BAZAAR/DB/images.txt");
    img.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!img.atEnd()) {
        QString  line = img.readLine();
        QStringList list = line.split(' ');
        QString fileName = list[1];
        fileName.remove("\n");
        if(list[0].toInt() == thisAdv->ID_img){
            ui->img->setText(nullptr);
            QImage img;
            bool volid = img.load(fileName);
            if (volid) {
                img = img.scaledToWidth(ui->img->width(), Qt::SmoothTransformation);
                ui->img->setPixmap(QPixmap::fromImage(img));
                ui->img->setMinimumSize(QSize(280, 280));
            }
            break;
        }
    }
    img.close();
}

viewAdv::~viewAdv()
{
    delete ui;
}

void viewAdv::on_cansell_clicked()
{
    emit thisClose();
    emit closeRep();
    this->close();
}


void viewAdv::on_editOrP_clicked()
{
    emit closeRep();
    if (thisUser->ID_user == thisAdv->ID_user){

        if (ui->editOrP->text() == "Редактировать"){
            ui->description->setEnabled(true);
            ui->name->setEnabled(true);
            ui->cost->setEnabled(true);
            ui->editOrP->setText("Сохранить");
        }else{
            ui->description->setEnabled(false);
            ui->name->setEnabled(false);
            ui->cost->setEnabled(false);
            thisAdv->name = ui->name->text();
            thisAdv->desc = ui->description->toPlainText().remove("~");
            thisAdv->desc =  thisAdv->desc.remove("`");
            thisAdv->cost = ui->cost->text().toInt();
            QFile adv("C:/BAZAAR/BAZAAR/DB/object.txt");
            adv.open(QIODevice::ReadWrite| QIODevice::Text);
            QTextStream writeStream(&adv);
            QStringList* writeList = new QStringList[cur_id+1];
            int count = 0;
            QString sep = "~";
            while (!adv.atEnd()) {
                QString  line = adv.readLine();
                line = line.remove("\n");
                QStringList list = line.split('~');
                if(list[0].toInt() == thisAdv->ID_adv){
                    writeList[count].append(list[0]);
                    writeList[count].append(list[1]);
                    writeList[count].append(ui->name->text());
                    writeList[count].append(ui->description->toPlainText());
                    writeList[count].append(QString::number(thisAdv->ID_img));
                    writeList[count].append(ui->cost->text());
                }else{
                    writeList[count].append(list);
                }
                count++;
            }
            adv.close();
            adv.remove();
            adv.open(QIODevice::WriteOnly | QIODevice::Text);
            for (int i = 0; i < count - 1; i++) {
                writeStream <<  writeList[i][0];
                writeStream << sep;
                writeStream << writeList[i][1];
                writeStream << sep;
                writeStream << writeList[i][2];
                writeStream << sep;
                writeStream << writeList[i][3].replace("\n", "`");
                writeStream << sep;
                writeStream << writeList[i][4];
                writeStream << sep;
                writeStream << writeList[i][5];
                writeStream << "\n";
            }
            writeStream <<  writeList[count - 1][0];
            writeStream << sep;
            writeStream << writeList[count - 1][1];
            writeStream << sep;
            writeStream << writeList[count - 1][2];
            writeStream << sep;
            writeStream << writeList[count - 1][3].replace("\n", "`");
            writeStream << sep;
            writeStream << writeList[count - 1][4];
            writeStream << sep;
            writeStream << writeList[count - 1][5];
            adv.close();
            ui->editOrP->setText("Редактировать");
        }

    }else{
        QFile deal("C:/BAZAAR/BAZAAR/DB/deal.txt");
        deal.open(QIODevice::ReadOnly | QIODevice::Text);
        bool isNotFind = true; int current_ID = 0;
        while (!deal.atEnd()) {
            QString  line = deal.readLine();
            QStringList list = line.split(' ');
            current_ID = list[0].toInt();
            if ((list[1].toInt() == thisUser->ID_user) and (list[2].toInt() == thisAdv->ID_adv)){
                QMessageBox::critical(this, "Ошибка","Вы уже подали заявку.");
                deal.close();
                isNotFind = false;
            }
        }
        deal.close();
            if (isNotFind){
                deal.open(QIODevice::Append | QIODevice::Text);
                QTextStream writeStream(&deal);
                QString sep = " ";
                writeStream << "\n";
                writeStream << current_ID + 1;
                writeStream << sep;
                writeStream << thisUser->ID_user;
                writeStream << sep;
                writeStream << thisAdv->ID_adv;
                writeStream << sep;
                writeStream <<"ожидает";
                writeStream << sep;
                writeStream << QDate::currentDate().toString();
                deal.close();
                emit thisClose();
                this->close();
            }
    }
}


void viewAdv::on_repOrCh_clicked()
{
    if (thisUser->ID_user == thisAdv->ID_user){

            emit openChoose();
    }else{
            if (ui->repOrCh->isChecked()){
            report *thisReport = new report(thisUser, thisAdv);
            thisReport->show();
            connect(this, &viewAdv::closeRep, thisReport, &report::close);
            connect(thisReport, &report::thisClose, this, &viewAdv::repButIsReady);
        }else{
            emit closeRep();
        }
    }
}

void viewAdv::choosEx()
{
    choosing *chosWin = new choosing(thisUser, thisAdv);
    chosWin->show();
    emit closeRep();
    this->close();
}

void viewAdv::dealLook()
{
    ui->editOrP->hide();
    ui->repOrCh->hide();
    qDebug()<<"qwe";
}

void viewAdv::repButIsReady(){
    ui->repOrCh->setChecked(false);
}


void viewAdv::on_writeCust_clicked()
{
    QFile cha("C:/BAZAAR/BAZAAR/DB/chat.txt");
    cha.open(QIODevice::ReadOnly | QIODevice::Text);
    bool noFind = true;
    int count = 0;
    QTextStream writeStream(&cha);
    while(!cha.atEnd()){
        QString  lineCha = cha.readLine();
        QStringList listCha = lineCha.split(' ');
        if (listCha[3].toInt() == thisUser->ID_user){
            noFind = false;
        }
        count++;
    }
    cha.close();
    if (noFind){
         cha.open(QIODevice::Append | QIODevice::Text);
        QString sep = " ";
        writeStream << "\n";
        writeStream << count + 1;
        writeStream << sep;
        writeStream << ownerAdv_ID;
        writeStream << sep;
        writeStream << "";
        writeStream << sep;
        writeStream << thisUser->ID_user;

        writeStream << "\n";
        writeStream << count + 2;
        writeStream << sep;
        writeStream << thisUser->ID_user;
        writeStream << sep;
        writeStream << "";
        writeStream << sep;
        writeStream << ownerAdv_ID;
    }
    cha.close();
    Chat *opChat = new Chat(thisUser);
    opChat->show();
    emit openChat();
    emit closeRep();
    this->close();
}

