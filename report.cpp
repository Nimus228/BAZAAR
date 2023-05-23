#include "report.h"
#include "ui_report.h"
#include <QMenu>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include<QMessageBox>
report::report(user *thatUser, advertisement *thatAdv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::report)
{
    ID_rep = -1;
    thisUser = thatUser;
    thisAdv = thatAdv;
    ui->setupUi(this);
    this->setWindowTitle("Жалоба");
    QRegularExpressionValidator* val = new QRegularExpressionValidator(QRegularExpression("[^\~]*"), this);
    QMenu *choiceReas = new QMenu(ui->choice);
    QFile report("C:/BAZAAR/BAZAAR/DB/report.txt");
    report.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!report.atEnd()) {
        QString  line = report.readLine();
        QStringList list = line.split('~');
        QAction *menuAction = choiceReas->addAction(list[1]);
        list[1] = list[1].remove("~");
        menuAction->setObjectName(list[0] + "~" + list[1]);
        connect(menuAction, SIGNAL(triggered()), this, SLOT(choice()));
    }
    report.close();
    ui->reason->setValidator(val);
    ui->description->setValidator(val);
    ui->choice->setMenu(choiceReas);
}

report::~report()
{
    delete ui;
}

void report::on_cancel_clicked()
{
    emit thisClose();
    this->close();
}

void report::choice()
{
    QStringList list = sender()->objectName().remove("\n").split('~');
    ui->choice->setText(list[1]);
    ID_rep = list[0].toInt();
}


void report::on_accept_clicked()
{
    if (ID_rep == -1){
        QMessageBox::critical(this, "Ошибка","Пожалуйста укажите тип жалобы.");
    }else{
        QFile reports("C:/BAZAAR/BAZAAR/DB/reports.txt");
        reports.open(QIODevice::ReadOnly | QIODevice::Text);
        bool isNotFind = true; int current = 0;
        while (!reports.atEnd()) {
            QString  line = reports.readLine();
            line = line.remove("\n");
            QStringList list = line.split('~');
            current = list[0].toInt();
            if ((list[3].toInt() == thisUser->ID_user) and (list[2].toInt() == ID_rep) and (list[1].toInt() == thisAdv->ID_adv)){
                QMessageBox::critical(this, "Ошибка","Вы уже подали жалобу.");
                isNotFind = false;
            }
        }
        reports.close();
        if (isNotFind){
            reports.open(QIODevice::Append | QIODevice::Text);
            QTextStream writeStream(&reports);
            QString sep = "~";
            writeStream << "\n";
            writeStream << current + 1;
            writeStream << sep;
            writeStream << thisAdv->ID_adv;
            writeStream << sep;
            writeStream << ID_rep;
            writeStream << sep;
            writeStream <<thisUser->ID_user;
            writeStream << sep;
            writeStream <<ui->reason->text();
            writeStream << sep;
            writeStream <<ui->description->text();
            this->close();
            emit thisClose();
            reports.close();
        }
    }
}

