#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class userProfile{
public:
    int ID_profil, ID_user, ID_img;
    float rang;
    QString name, desc;

public:
    userProfile();
    userProfile(int ID_profil, int ID_user, QString name, float rang, int ID_img, QString desc){
        this->ID_profil = ID_profil;
        this->ID_user = ID_user;
        this->name = name;
        this->rang = rang;
        this->ID_img = ID_img;
        this->desc = desc;
    }
    void createProfile(int ID_profil, int ID_user, QString name, float rang, int ID_img, QString desc){
        QFile profile("C:/BAZAAR/BAZAAR/DB/profiles.txt");
        profile.open(QIODevice::Append );
        QTextStream writeStream(&profile);
        QString sep = "~";
        writeStream << "\n";
        writeStream << QString::number(ID_profil);
        writeStream << sep;
        writeStream << QString::number(ID_user);
        writeStream << sep;
        writeStream << name;
        writeStream << sep;
        writeStream << QString::number(rang);
        writeStream << sep;
        writeStream << QString::number(ID_img);
        writeStream << sep;
        writeStream << desc.replace("\n", "`");
        profile.close();
    }
    ~userProfile();


};

class user
{
public:
    int ID_user;
    QString log, type;
    user();
    user(int ID_user, QString log, QString type){
        this->ID_user = ID_user;
        this->log = log;
        this->type = type;
    }
};
class ghost
{
public:
    user logIn(QString log, QString pas){
        QFile users("C:/BAZAAR/BAZAAR/DB/users.txt");
        users.open(QIODevice::ReadOnly | QIODevice::Text);
        while (!users.atEnd()) {
            QString  line = users.readLine();
            QStringList list = line.split(' ');
            if ( (log == list[1]) and (pas == list[2])) {
                if ((list[4] == "1\n") or (list[4] == "1")){
                    users.close();
                    return {list[0].toInt(), list[1], list[3]};
                }else{
                    users.close();
                    return {-1,"none","none"};
                }
            }
        }
        users.close();
        return  {-1,"none","none"};
    }
    user regist(QString log, QString pas1, QString pas2, bool typ){
        int id_user = -1;
        QFile users("C:/BAZAAR/BAZAAR/DB/users.txt");
        users.open(QIODevice::ReadOnly | QIODevice::Text);
        if (pas1 != pas2){
            return {-1,"none","none"};
        }
        while (!users.atEnd()) {
            QString  line = users.readLine();
            QStringList list = line.split(' ');
            id_user = list[0].toInt();
            if  (log == list[1]) {
                users.close();
                return {-1,"none","none"};
            }
        }
        users.close();
        users.open(QIODevice::Append );
        QTextStream writeStream(&users);
        QString type, sep = " ";
        if (typ){
            type = "c";
        }else{
            type = "e";
        }
        writeStream << "\n";
        writeStream <<QString::number(id_user + 1);
        writeStream << sep;
        writeStream << log;
        writeStream << sep;
        writeStream << pas1;
        writeStream << sep;
        writeStream << type;
        writeStream << " 1";
        users.close();
        return {id_user + 1, log, type};
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exit_clicked();

    void on_reg_clicked();

    void on_pas_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};




class advertisement{
public:
    int ID_adv, ID_user, ID_img, cost;
    QString name, desc;

public:
    advertisement();
    advertisement(int ID_adv, int ID_user, QString name,QString desc, int ID_img, int cost){
        this->ID_adv = ID_adv;
        this->ID_user = ID_user;
        this->name = name;
        this->desc = desc;
        this->ID_img = ID_img;
        this->cost = cost;
    }
    ~advertisement();
};

#endif // MAINWINDOW_H
