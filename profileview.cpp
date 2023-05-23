#include "profileview.h"
#include "ui_profileview.h"

profileView::profileView(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::profileView)
{
    ui->setupUi(this);
    thisUser = thatUser;
    this->setWindowTitle(thisUser->log);
    ui->log->setText(thisUser->log);
    QFile profile("C:/BAZAAR/BAZAAR/DB/profiles.txt");
    profile.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!profile.atEnd()) {
        QString  line = profile.readLine();
        QStringList list = line.split('~');
        if(list[1].toInt() == thisUser->ID_user){
            thisProfile = new userProfile(list[0].toInt(), list[1].toInt(), list[2], list[3].toFloat(), list[4].toInt(), list[5]);
            ui->description2->setText(thisProfile->name);
            ui->rang->setText(QString::number(thisProfile->rang));
            ui->description->append(thisProfile->desc.replace("`","\n"));
        }
    }
    profile.close();
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
}

profileView::~profileView()
{
    delete ui;
}


void profileView::on_backBut_clicked()
{
    this->close();
}

