#ifndef REPORT_H
#define REPORT_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class report;
}

class report : public QWidget
{
    Q_OBJECT
    user *thisUser;
    advertisement *thisAdv;
    int ID_rep;
public:
    explicit report(user *thatUser, advertisement *thatAdv, QWidget *parent = nullptr);
    ~report();

private slots:
    void on_cancel_clicked();
    void on_accept_clicked();

public slots:
    void choice();
signals:
    void on_choice();
    void thisClose();
private:
    Ui::report *ui;
};

#endif // REPORT_H
