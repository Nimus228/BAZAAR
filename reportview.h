#ifndef REPORTVIEW_H
#define REPORTVIEW_H

#include <QWidget>
#include "mainwindow.h"
#include <QPushButton>
namespace Ui {
class reportView;
}

class reportView : public QWidget
{
    Q_OBJECT
    user *thisUser;

    QVector<QPushButton*> buttonsProf;
    QVector<QPushButton*> buttonsAdv;
    QVector<QPushButton*> buttonsRep;
    int countRep, current, ID_userRep, ID_rep;
public:
    explicit reportView(user *thatUser, QWidget *parent = nullptr);
    ~reportView();
signals:
    void closeMain();
    void closeMini();
    void closeModMini();
    void closeThis();
public slots:
    void activeWin();
private slots:
    void on_mini_clicked();
    void on_bazaar_clicked();
    void openProf();
    void openAdv();
    void showInf();

    void on_ban_clicked();

    void on_neBan_clicked();

private:
    Ui::reportView *ui;
};

#endif // REPORTVIEW_H
