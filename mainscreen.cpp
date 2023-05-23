#include "mainscreen.h"
#include "ui_mainscreen.h"
#include "modminmenu.h"
#include "minimenu.h"
#include "viewadv.h"
mainscreen::mainscreen(QStringList list,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainscreen)
{
    thisUser = new user(list[0].toInt(), list[1], list[2]);
    ui->setupUi(this);
    this->setWindowTitle("Лента");
    ui->label->setText(thisUser->log);
    ui->label_2->setText(thisUser->type);
    ui->label_3->setText(QString::number(thisUser->ID_user));
    ui->filGroup->hide();

    countObj = 0;
    //нужно сделать так чтобы объявление проходило проверку и если оно в диал ОЖИДАЕТ только тогда отображать его
    QFile adv("C:/BAZAAR/BAZAAR/DB/object.txt");
    adv.open(QIODevice::ReadOnly | QIODevice::Text);
    QFile img("C:/BAZAAR/BAZAAR/DB/images.txt");
    ui->scrollArea->setWidgetResizable( true );
    QWidget * container = new QWidget();
    ui->scrollArea->setWidget( container );
    ui->showCaseV = new QVBoxLayout(container);
    while (!adv.atEnd()) {
        QString  line = adv.readLine();
        QStringList list = line.split('~');
        if(true){
            img.open(QIODevice::ReadOnly | QIODevice::Text);
            buttons.append(new QPushButton(container));
            connect(buttons[countObj], &QPushButton::clicked, this, &mainscreen::openObj);
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
            QLabel *tex = new QLabel(list[2] + "\n" + "Цена: " + list[5]);
            QHBoxLayout *lay = new QHBoxLayout;
            tex->setStyleSheet("QLabel{font-size: 16pt;}");
            lay->addWidget(buttons[countObj]);
            lay->addWidget(tex);
            ui->showCaseV->addLayout(lay);
            countObj++;
        }
    }
    img.close();
    adv.close();

}
mainscreen::~mainscreen()
{
    delete ui;
}

void mainscreen::on_miniProf_clicked()
{
    QString type = ui->label_2->text();
    if (ui->miniProf->isChecked()){
        if (type == "m"){
            modMinMenu* menu = new modMinMenu(thisUser);
            menu->show();
            connect(menu, &modMinMenu::closeMain, this, &mainscreen::close);
            connect(this, &mainscreen::closeModMini, menu, &modMinMenu::close);
        }else{
            miniMenu* menu = new miniMenu(thisUser);
            menu->show();
            connect(menu, &miniMenu::closeMain, this, &mainscreen::close);
            connect(this, &mainscreen::closeMini, menu, &miniMenu::close);
        }
    }else{
        if (type == "m"){
            emit closeModMini();
        }else{
            emit closeMini();
        }
    }
}


void mainscreen::on_bazaar_clicked()
{
    QStringList list = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    mainscreen *screen = new mainscreen(list);
    this->close();
    emit closeMini();
    screen->show();
}

void mainscreen::openObj()
{
    viewAdv *advWin = new viewAdv(thisUser, sender()->objectName());
    connect(advWin, &viewAdv::thisClose, this, &mainscreen::activeWin);
    connect(advWin, &viewAdv::openChoose, this, &mainscreen::close);
    connect(advWin, &viewAdv::openChat, this, &mainscreen::close);
    advWin->show();
    this->setDisabled(true);
    emit closeMini();
}

void mainscreen::activeWin()
{
    QStringList list ={QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    this->setDisabled(false);
    mainscreen *refresh = new mainscreen(list);
    refresh->show();
    this->close();
}


void mainscreen::on_filtr_clicked()
{
    if (ui->filtr->isChecked()){
        ui->filGroup->show();
    }else{
        ui->filGroup->hide();
    }
}

