#ifndef CHOOSING_H
#define CHOOSING_H

#include <QWidget>
#include "mainwindow.h"
#include <QPushButton>
namespace Ui {
class choosing;
}

class choosing : public QWidget
{
    Q_OBJECT
    user *thisUser, *userExecuter;
    advertisement *thisAdv;
    QVector<QPushButton*> buttonsProf;
    QVector<QPushButton*> buttonsAcc;
    int countExecu, current, ID_deal, ID_user;
public:
    explicit choosing(user *thatUser, advertisement *thatAdv, QWidget *parent = nullptr);
    ~choosing();
signals:
    void closeMain();
    void closeMini();
    void closeModMini();
    void closeThis();
private slots:
    void on_bazaar_clicked();
    void openProf();
    void acceptExe();//действия принятия на вторую кнопку
    void on_mini_clicked();

private:
    Ui::choosing *ui;
};

#endif // CHOOSING_H
