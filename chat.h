#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include "mainwindow.h"
#include <QPushButton>
#include <QUdpSocket>

namespace Ui {
class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT
    user *thisUser;
    int countCha, current, ID_aim, cur_mes;
    QVector<QPushButton*> buttonsCha;
    QString nameAim;
public:
    explicit Chat(user *thatUser, QWidget *parent = nullptr);
    ~Chat();
signals:
    void closeMain();
    void closeMini();
    void closeModMini();
private slots:
    void showMessage();
    void on_mini_clicked();
    void on_bazaar_clicked();
    void on_send_clicked();
public slots:
    void ReadingData();
private:
    Ui::Chat *ui;
    QUdpSocket *udpSocket;
};

#endif // CHAT_H
