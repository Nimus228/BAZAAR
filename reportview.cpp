#include "reportview.h"
#include "ui_reportview.h"
#include "mainscreen.h"
#include "modminmenu.h"
#include "viewadv.h"
#include "profileview.h"
reportView::reportView(user *thatUser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reportView)
{

    thisUser = thatUser;
    ui->setupUi(this);
    ui->ban->setDisabled(true);
    ui->neBan->setDisabled(true);
    this->setWindowTitle("Просмотр жалоб");
    countRep = 0;
    ID_userRep = -1;
    QFile reports("C:/BAZAAR/BAZAAR/DB/reports.txt");
    reports.open(QIODevice::ReadOnly | QIODevice::Text);
    QFile userName("C:/BAZAAR/BAZAAR/DB/users.txt");
    QFile adv("C:/BAZAAR/BAZAAR/DB/object.txt");
    ui->scrollArea->setWidgetResizable( true );
    QWidget * container = new QWidget();
    ui->scrollArea->setWidget( container );
    ui->showCaseV = new QVBoxLayout(container);
    while (!reports.atEnd()) {
        QString  line = reports.readLine();
        QStringList list = line.split('~');
        current = list[0].toInt();

        buttonsProf.append(new QPushButton(container));//открывает профиль
        buttonsAdv.append(new QPushButton(container));//открывает объявление
        buttonsRep.append(new QPushButton(container));//отображает инфу по жалобе

        connect(buttonsProf[ countRep], &QPushButton::clicked, this, &reportView::openProf);
        connect(buttonsAdv[countRep], &QPushButton::clicked, this, &reportView::openAdv);
        connect(buttonsRep[countRep], &QPushButton::clicked, this, &reportView::showInf);

        buttonsRep[countRep]->setText("Отобразить");
        buttonsProf[countRep]->setMinimumSize(QSize(130, 40));
        buttonsAdv[countRep]->setMinimumSize(QSize(130, 40));
        buttonsRep[countRep]->setMinimumSize(QSize(130, 40));

        buttonsProf[countRep]->setStyleSheet("QPushButton {font-size: 16pt;}");
        buttonsAdv[countRep]->setStyleSheet("QPushButton {font-size: 16pt;}");
        buttonsRep[countRep]->setStyleSheet("QPushButton {font-size: 16pt;}");
        adv.open(QIODevice::ReadOnly | QIODevice::Text);
        while (!adv.atEnd()) {
            QString  lineAdv = adv.readLine();
            QStringList listAdv = lineAdv.split('~');
            if(list[1].toInt() == listAdv[0].toInt()){
                ID_userRep = listAdv[1].toInt();
                buttonsRep[countRep]->setObjectName(line + "~" +  listAdv[1]);
                buttonsAdv[countRep]->setText(listAdv[2]);
                buttonsAdv[countRep]->setObjectName(listAdv[0]);
                adv.close();
            }
        }
        userName.open(QIODevice::ReadOnly | QIODevice::Text);
        while (!userName.atEnd()) {
            QString  lineUser = userName.readLine();
            QStringList listUsr = lineUser.split(' ');
            if(ID_userRep == listUsr[0].toInt()){
                buttonsProf[countRep]->setText(listUsr[1]);
                buttonsProf[countRep]->setObjectName(listUsr[0] + " " + listUsr[1] + " " + listUsr[3]);
                userName.close();
            }
        }
        QHBoxLayout *lay = new QHBoxLayout;
        lay->addWidget(buttonsRep[countRep]);
        lay->addWidget(buttonsAdv[countRep]);
        lay->addWidget(buttonsProf[countRep]);
        ui->showCaseV->addLayout(lay);
        countRep++;
    }
    adv.close();
    userName.close();
    reports.close();

}

reportView::~reportView()
{
    delete ui;
}

void reportView::activeWin()
{
    this->setDisabled(false);
}

void reportView::on_mini_clicked()
{
    if (ui->mini->isChecked()){
        modMinMenu* menu = new modMinMenu(thisUser);
        menu->show();
        connect(menu, &modMinMenu::closeMain, this, &reportView::close);
        connect(this, &reportView::closeModMini, menu, &modMinMenu::close);
        emit closeThis();
    }else{
        emit closeModMini();
        emit closeThis();
    }
}

void reportView::on_bazaar_clicked()
{
    QStringList list = {QString::number(thisUser->ID_user), thisUser->log, thisUser->type};
    mainscreen *screen = new mainscreen(list);
    this->close();
    emit closeMini();
    emit closeModMini();
    emit closeThis();
    screen->show();
}

void reportView::openProf()
{
    emit closeThis();
    QStringList l = sender()->objectName().split(" ");
    user *F = new user(l[0].toInt(), l[1], l[2]);
    profileView *open = new profileView(F);
    connect(this, &reportView::closeThis, open, &profileView::close);
    open->show();
}

void reportView::openAdv()
{
    viewAdv *advWin = new viewAdv(thisUser, sender()->objectName());
    connect(advWin, &viewAdv::thisClose, this, &reportView::activeWin);
    connect(advWin, &viewAdv::openChoose, this, &reportView::close);
    advWin->show();
    this->setDisabled(true);
    emit closeMini();
}

void reportView::showInf()
{

    ui->ban->setEnabled(true);
    ui->neBan->setEnabled(true);
    QStringList l = sender()->objectName().split("~");
    ID_userRep = l[6].toInt();
    ui->desc->setText(l[5]);
    ui->reas->setText(l[4]);
    ID_rep = l[0].toInt();
    QFile report("C:/BAZAAR/BAZAAR/DB/report.txt");
    report.open((QIODevice::ReadOnly | QIODevice::Text));
    while (!report.atEnd()){
        QString  lineReport = report.readLine();
        QStringList listReport = lineReport.split('~');
        if ( l[2] == listReport[0]){
            ui->choice->setText(listReport[1]);
            report.close();
        }
    }
}


void reportView::on_ban_clicked()
{
    int count = 0;
    QFile usr("C:/BAZAAR/BAZAAR/DB/users.txt");
    usr.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream writeStream(&usr);
    QStringList q;
    QVector<QStringList> writeList;
    while (!usr.atEnd()){
        QString  lineUsr = usr.readLine();
        QStringList listUsr = lineUsr.split(' ');
        if ( ID_userRep == listUsr[0].toInt()){
            q = {listUsr[0],  listUsr[1], listUsr[2], listUsr[3], "0\n"};
            writeList.append(q);
            count++;
        }else{
            writeList.append(listUsr);
            count++;
        }
    }
    usr.close();
    usr.remove();
    usr.open(QIODevice::WriteOnly | QIODevice::Text);
    QString sep =" ";
    for (int i = 0; i < count; i++) {
        writeStream <<  writeList[i][0];
        writeStream <<  sep;
        writeStream <<  writeList[i][1];
        writeStream <<  sep;
        writeStream <<  writeList[i][2];
        writeStream <<  sep;
        writeStream <<  writeList[i][3];
        writeStream <<  sep;
        writeStream <<  writeList[i][4];
    }
    usr.close();
    emit closeThis();
    on_neBan_clicked();
}


void reportView::on_neBan_clicked()
{
    QFile reports("C:/BAZAAR/BAZAAR/DB/reports.txt");
    reports.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream writeStream(&reports);
    QStringList* writeList = new QStringList[current + 1];
     int count = 0;
    while (!reports.atEnd()){
        QString  lineReports = reports.readLine();
        QStringList listReports = lineReports.split('~');
        if ( ID_rep == listReports[0].toInt()){
        }else{
            writeList[count].append(listReports);
            count++;
        }
    }
    reports.close();
    reports.remove();
    reports.open(QIODevice::WriteOnly | QIODevice::Text);
    QString sep ="~";
    for (int i = 0; i < count; i++) {
        writeStream <<  writeList[i][0];
        writeStream <<  sep;
        writeStream <<  writeList[i][1];
        writeStream <<  sep;
        writeStream <<  writeList[i][2];
        writeStream <<  sep;
        writeStream <<  writeList[i][3];
        writeStream <<  sep;
        writeStream <<  writeList[i][4];
        writeStream <<  sep;
        writeStream <<  writeList[i][5];
    }
    reports.close();
    emit closeThis();
    reportView *refresh = new reportView(thisUser);
    refresh->show();
    this->close();
}
