#include "createadv.h"
#include "ui_createadv.h"
#include <QFile>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QFileDialog>
#include <QPixmap>
createAdv::createAdv(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createAdv)
{
    ui->setupUi(this);
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\~\`]*"), this);
    QRegularExpressionValidator* val1 = new QRegularExpressionValidator(QRegularExpression("[^\\D]{15}"), this);
    thisUser = thatUser;
    thisAdv = new advertisement(-1, thisUser->ID_user, "", "", 6, -1);
    ui->name->setValidator(val);
    ui->cost->setValidator(val1);

    this->setWindowTitle("Создание Объявления");
}

createAdv::~createAdv()
{
    delete ui;
}

void createAdv::on_cansell_clicked()
{
    emit thisClose();
    this->close();
}


void createAdv::on_savee_clicked()
{
    QFile adv("C:/BAZAAR/BAZAAR/DB/object.txt");
    adv.open(QIODevice::ReadWrite| QIODevice::Text);
    int current = 0;
    thisAdv->name = ui->name->text();
    thisAdv->desc = ui->description->toPlainText().remove("`");
    thisAdv->desc = thisAdv->desc.remove("~");
    thisAdv->cost = ui->cost->text().toInt();
    while (!adv.atEnd()){
        QString  line = adv.readLine();
        QStringList list = line.split('~');
        current = list[0].toInt();
    }
    thisAdv->ID_adv = current + 1;
    adv.close();
    adv.open(QIODevice::Append| QIODevice::Text);
    QTextStream writeStream(&adv);
    QString sep = "~";
    writeStream << "\n";
    writeStream <<  thisAdv->ID_adv;
    writeStream << sep;
    writeStream << thisAdv->ID_user;
    writeStream << sep;
    writeStream << thisAdv->name;
    writeStream << sep;
    writeStream << thisAdv->desc;
    writeStream << sep;
    writeStream << thisAdv->ID_img;
    writeStream << sep;
    writeStream << thisAdv->cost;
    adv.close();
    emit thisClose();
    this->close();
}

void createAdv::on_img_clicked()
{
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
            thisAdv->ID_img = list[0].toInt();
            checkFind = !checkFind;
            break;
        }
    }
    imgg.close();
    if ((checkFind)and(fileName != nullptr)){
        imgg.open(QIODevice::Append | QIODevice::Text);
        QTextStream writeStream(&imgg);
        writeStream << "\n";
        writeStream << count + 1;
        writeStream << " ";
        writeStream << fileName;
        thisAdv->ID_img = count + 1;
    }
    ui->img->setText(nullptr);
    if (QString::compare(fileName, QString()) != 0)
    {
        QImage img;
        bool volid = img.load(fileName);
        if (volid) {
            img = img.scaledToWidth(ui->img->width(), Qt::SmoothTransformation);
            ui->img->setIcon(QPixmap::fromImage(img));
            ui->img->setIconSize(QSize(280, 280));
            ui->img->setMinimumSize(QSize(280, 280));
            ui->img->setMaximumSize(QSize(280, 280));
        }
    }
}

