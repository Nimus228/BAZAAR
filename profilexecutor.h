#ifndef PROFILEXECUTOR_H
#define PROFILEXECUTOR_H

#include <QWidget>
#include "mainwindow.h"
#include <QPushButton>

namespace Ui {
class profilExecutor;
}

class profilExecutor : public QWidget
{
    Q_OBJECT
    user *thisUser;
    userProfile *thisProfile;
    int cur_id, countObj;
    bool edit;
    QVector<QPushButton*> buttons;

public:
    explicit profilExecutor(user *thatUser, QWidget *parent = nullptr);
    ~profilExecutor();

private slots:
    void on_mini_clicked();
    void on_editBut_clicked();
    void on_img_clicked();
    void on_bazaar_clicked();
    void openObj();
public slots:
    void activeWin();
signals:
    void closeMini();
    void advOp();

private:
    Ui::profilExecutor *ui;
};

#endif // PROFILEXECUTOR_H
