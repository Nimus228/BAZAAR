#include "profilcustomer.h"
#include "mainscreen.h"
#include "ui_profilcustomer.h"
#include "minimenu.h"
#include "mainscreen.h"
#include <QFile>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QFileDialog>
#include <QPixmap>
#include "createadv.h"
#include "viewadv.h"

profilCustomer::profilCustomer(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::profilCustomer)
{
    countObj = 0;
    buttons.clear();
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\~\`]*"), this);
    thisUser = thatUser;
    ui->setupUi(this);
    this->setWindowTitle("Пофиль");
    edit = false;
    ui->description2->setValidator(val);
    ui->log->setText(thisUser->log);
    QFile profile("C:/BAZAAR/BAZAAR/DB/profiles.txt");
    profile.open(QIODevice::ReadOnly | QIODevice::Text);
    bool check = false;
    while (!profile.atEnd()) {
        QString  line = profile.readLine();
        QStringList list = line.split('~');
        cur_id = list[0].toInt();
        if(list[1].toInt() == thisUser->ID_user){
            thisProfile = new userProfile(list[0].toInt(), list[1].toInt(), list[2], list[3].toFloat(), list[4].toInt(), list[5]);
            ui->description2->setText(thisProfile->name);
            ui->rang->setText(QString::number(thisProfile->rang));
            ui->description->append(thisProfile->desc.replace("`","\n"));
            check = true;
        }
    }
    profile.close();
    if(!check){
        thisProfile->createProfile(cur_id + 1, thisUser->ID_user, ui->description2->text(), ui->rang->text().toInt(), 1, ui->description->toPlainText().replace("\n", "`"));
    }
    QFile img("C:/BAZAAR/BAZAAR/DB/images.txt");
    img.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!img.atEnd()) {
        QString  line = img.readLine();
        QStringList list = line.split(' ');
        QString fileName = list[1];
        fileName.remove("\n");
        if(list[0].toInt() == thisProfile->ID_img){
            ui->img->setText(nullptr);
            QImage img;
            bool volid = img.load(fileName);
            if (volid) {
                img = img.scaledToWidth(ui->img->width(), Qt::SmoothTransformation);
                ui->img->setIcon(QPixmap::fromImage(img));
                ui->img->setIconSize(QSize(300, 300));
                ui->img->setMinimumSize(QSize(300, 300));
            }
            break;
        }
    }
    img.close();

    QFile adv("C:/BAZAAR/BAZAAR/DB/object.txt");
    adv.open(QIODevice::ReadOnly | QIODevice::Text);
    ui->scrollArea->setWidgetResizable( true );
    QWidget * container = new QWidget();
    ui->scrollArea->setWidget( container );
    ui->showCase = new QHBoxLayout(container);
    while (!adv.atEnd()) {
        QString  line = adv.readLine();
        QStringList list = line.split('~');
        if(list[1].toInt() == thisUser->ID_user){
            img.open(QIODevice::ReadOnly | QIODevice::Text);
            buttons.append(new QPushButton(container));
            connect(buttons[countObj], &QPushButton::clicked, this, &profilCustomer::openObj);
            buttons[countObj]->setObjectName(list[0]);
            buttons[countObj]->setFlat(true);
            buttons[countObj]->setMinimumSize(QSize(130, 150));
            buttons[countObj]->setMaximumSize(QSize(130, 150));
            while (!img.atEnd()) {
                QString  lineimg = img.readLine();
                QStringList listImg = lineimg.split(' ');
                if(list[4].toInt() == listImg[0].toInt()){
                    QImage img;
                    bool volid = img.load(listImg[1].remove("\n"));
                    if (volid){
                        img = img.scaledToWidth( buttons[countObj]->width(), Qt::SmoothTransformation);
                        buttons[countObj]->setIcon(QPixmap::fromImage(img));
                        buttons[countObj]->setIconSize(QSize(130, 150));
                        break;
                    }
                }
            }
            img.close();
            buttons[countObj]->setStyleSheet("QPushButton { text-align: bottom;}");
//            buttons[countObj]->setText(list[2]);
            ui->showCase->addWidget( buttons[countObj] );
            countObj++;
        }
    }
    img.close();
    adv.close();

}

profilCustomer::~profilCustomer()
{
    delete ui;
}

void profilCustomer::on_mini_clicked()
{

    if (ui->mini->isChecked()){
        miniMenu* menu = new miniMenu(thisUser);
        menu->show();
        connect(menu, &miniMenu::closeMain, this, &profilCustomer::close);
        connect(this, &profilCustomer::closeMini, menu, &miniMenu::close);
    }else{
        emit closeMini();
    }
}


void profilCustomer::on_bazaar_clicked()
{
    QStringList list = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    mainscreen *screen = new mainscreen(list);
    this->close();
    emit closeMini();
    screen->show();
}


void profilCustomer::on_editBut_clicked()
{

    if (ui->editBut->text() == "Изменить"){
        edit = true;
        ui->description->setEnabled(true);
        ui->description2->setEnabled(true);
        ui->img->setEnabled(true);
        ui->addBut->setDisabled(true);
        ui->editBut->setText("Сохранить");
    }else{
        ui->addBut->setDisabled(false);
        ui->description->setEnabled(false);
        ui->description2->setEnabled(false);
        edit = false;
        ui->description->setText(ui->description->toPlainText().remove("`"));
        ui->description->setText(ui->description->toPlainText().remove("~"));
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
                writeList[count].append(ui->description2->text());
                writeList[count].append(ui->rang->text());
                writeList[count].append(QString::number(thisProfile->ID_img));
                QString s = ui->description->toPlainText();
                s.resize(s.length() - 1);
                writeList[count].append(s.replace("`", "\n"));
            }else{
                list[5].resize(list[5].length() - 1);
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
        ui->editBut->setText("Изменить");
    }

}


void profilCustomer::on_img_clicked()
{

    if (edit){
        QString fileName = QFileDialog::getOpenFileName(this, tr("Выбери"), " ", tr("Images (*.png)"));
        QFile imgg("C:/BAZAAR/BAZAAR/DB/images.txt");
        imgg.open(QIODevice::ReadOnly | QIODevice::Text);
        bool checkFind = true;
        int count;
        while (!imgg.atEnd()) {
            QString  line = imgg.readLine();
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
        imgg.close();
        if (checkFind){
            imgg.open(QIODevice::Append | QIODevice::Text);
            QTextStream writeStream(&imgg);
            writeStream << "\n";
            writeStream << count + 1;
            writeStream << " ";
            writeStream << fileName;
            thisProfile->ID_img = count + 1;
        }
        ui->img->setText(nullptr);
        if (QString::compare(fileName, QString()) != 0)
        {
            QImage img;
            bool volid = img.load(fileName);
            if (volid) {
                img = img.scaledToWidth(ui->img->width(), Qt::SmoothTransformation);

                ui->img->setIcon(QPixmap::fromImage(img));
                ui->img->setIconSize(QSize(300, 300));
                ui->img->setMinimumSize(QSize(300, 300));
            }
        }
    }
}


void profilCustomer::on_addBut_clicked()
{
    createAdv *thisAdv = new createAdv(thisUser);
    connect(thisAdv, &createAdv::thisClose, this, &profilCustomer::activeWin);
    thisAdv->show();
    this->setDisabled(true);
    emit closeMini();
}
void profilCustomer::openObj(){
    viewAdv *advWin = new viewAdv(thisUser, sender()->objectName());
    connect(advWin, &viewAdv::thisClose, this, &profilCustomer::activeWin);
    advWin->show();
    this->setDisabled(true);
    emit closeMini();
}
void profilCustomer::activeWin(){
    this->setDisabled(false);
    profilCustomer *refresh = new profilCustomer(thisUser);
    refresh->show();
    this->close();
}

