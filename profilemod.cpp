#include "profilemod.h"
#include "ui_profilemod.h"
#include "modminmenu.h"
#include "mainscreen.h"
#include <QFile>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QFileDialog>
#include <QPixmap>
profileMod::profileMod(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::profileMod)
{
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\~\`]*"), this);
    thisUser = thatUser;
    ui->setupUi(this);
    this->setWindowTitle("Пофиль");
    edit = false;
    ui->description2_2->setValidator(val);
    ui->log_2->setText(thisUser->log);
    QFile profile("C:/BAZAAR/BAZAAR/DB/profiles.txt");
    profile.open(QIODevice::ReadOnly | QIODevice::Text);
    bool check = false;
    while (!profile.atEnd()) {
        QString  line = profile.readLine();
        QStringList list = line.split('~');
        cur_id = list[0].toInt();
        if(list[1].toInt() == thisUser->ID_user){
            thisProfile = new userProfile(list[0].toInt(), list[1].toInt(), list[2], list[3].toFloat(), list[4].toInt(), list[5]);
            ui->description2_2->setText(thisProfile->name);
            ui->rang_2->setText(QString::number(thisProfile->rang));
            check = true;
        }
    }
    profile.close();
    if(!check){
        thisProfile->createProfile(cur_id + 1, thisUser->ID_user, ui->description2_2->text(), ui->rang_2->text().toInt(), 1, "");
    }
    QFile img("C:/BAZAAR/BAZAAR/DB/images.txt");
    img.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!img.atEnd()) {
        QString  line = img.readLine();
        QStringList list = line.split(' ');
        QString fileName = list[1];
        fileName.remove("\n");
        if(list[0].toInt() == thisProfile->ID_img){
            ui->img_2->setText(nullptr);
            QImage img;
            bool volid = img.load(fileName);
            if (volid) {
                img = img.scaledToWidth(ui->img_2->width(), Qt::SmoothTransformation);
                ui->img_2->setIcon(QPixmap::fromImage(img));
                ui->img_2->setIconSize(QSize(300, 300));
                ui->img_2->setMinimumSize(QSize(300, 300));
            }
            break;
        }
    }
    img.close();
}

profileMod::~profileMod()
{
    delete ui;
}

void profileMod::on_mini_2_clicked()
{
    if (ui->mini_2->isChecked()){
        modMinMenu* menu = new modMinMenu(thisUser);
        menu->show();
        connect(menu, &modMinMenu::closeMain, this, &profileMod::close);
        connect(this, &profileMod::closeMini, menu, &modMinMenu::close);
    }else{
        emit closeMini();
    }

}


void profileMod::on_editBut_2_clicked()
{

    if (ui->editBut_2->text() == "Изменить"){
        edit = true;
        ui->description2_2->setEnabled(true);
        ui->img_2->setEnabled(true);
        ui->editBut_2->setText("Сохранить");
    }else{
        ui->description2_2->setEnabled(false);
        edit = false;
        QFile profile("C:/BAZAAR/BAZAAR/DB/profiles.txt");
        profile.open(QIODevice::ReadWrite| QIODevice::Text);
        QTextStream writeStream(&profile);
        QStringList* writeList = new QStringList[cur_id+1];
        int count = 0;
        QString sep = "~";
        while (!profile.atEnd()) {
            QString  line = profile.readLine();
            QStringList list = line.split('~');
            if(list[1].toInt() == thisProfile->ID_user){
                writeList[count].append(list[0]);
                writeList[count].append(list[1]);
                writeList[count].append(ui->description2_2->text());
                writeList[count].append(ui->rang_2->text());
                writeList[count].append(QString::number(thisProfile->ID_img));
                writeList[count].append("");
            }else{
                writeList[count].append(list);
            }
            count++;
        }
        profile.close();
        profile.remove();
        profile.open(QIODevice::WriteOnly | QIODevice::Text);
        for (int i = 0; i < count - 1; i++) {
            writeStream <<  writeList[i][0];
            writeStream << sep;
            writeStream << writeList[i][1];
            writeStream << sep;
            writeStream << writeList[i][2].replace("\n", "`");
            writeStream << sep;
            writeStream << writeList[i][3];
            writeStream << sep;
            writeStream << writeList[i][4];
            writeStream << sep;
            writeStream << writeList[i][5].replace("\n", "`");
            writeStream << "\n";
        }
        writeStream <<  writeList[count - 1][0];
        writeStream << sep;
        writeStream << writeList[count - 1][1];
        writeStream << sep;
        writeStream << writeList[count - 1][2].replace("\n", "`");
        writeStream << sep;
        writeStream << writeList[count - 1][3];
        writeStream << sep;
        writeStream << writeList[count - 1][4];
        writeStream << sep;
        writeStream << writeList[count - 1][5].replace("\n", "`");
        profile.close();
        ui->editBut_2->setText("Изменить");
    }

}


void profileMod::on_bazaar_2_clicked()
{

    QStringList list = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    mainscreen *screen = new mainscreen(list);
    this->close();
    emit closeMini();
    screen->show();
}


void profileMod::on_img_2_clicked()
{
    if (edit){
        QString fileName = QFileDialog::getOpenFileName(this, tr("Выбери"), " ", tr("Images (*.png)"));
        QFile img("C:/BAZAAR/BAZAAR/DB/images.txt");
        img.open(QIODevice::ReadOnly | QIODevice::Text);
        bool checkFind = true;
        int count;
        while (!img.atEnd()) {
            QString  line = img.readLine();
            QStringList list = line.split(' ');
            QString imgName = list[1];
            count = list[0].toInt();
            imgName.remove("\n");
            if(imgName == fileName){
                thisProfile->ID_img = list[0].toInt();
                checkFind = !checkFind;
                break;
            }
        }
        img.close();
        if (checkFind){
            img.open(QIODevice::Append | QIODevice::Text);
            QTextStream writeStream(&img);
            writeStream << "\n";
            writeStream << count + 1;
            writeStream << " ";
            writeStream << fileName;
            thisProfile->ID_img = count + 1;
        }
        ui->img_2->setText(nullptr);
        if (QString::compare(fileName, QString()) != 0)
        {
            QImage img;
            bool volid = img.load(fileName);
            if (volid) {
                img = img.scaledToWidth(ui->img_2->width(), Qt::SmoothTransformation);

                ui->img_2->setIcon(QPixmap::fromImage(img));
                ui->img_2->setIconSize(QSize(300, 300));
                ui->img_2->setMinimumSize(QSize(300, 300));
            }
        }
    }

}

