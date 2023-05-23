#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include "mainwindow.h"
#include <QPushButton>>

namespace Ui {
class mainscreen;
}

class mainscreen : public QWidget
{
    Q_OBJECT
    int countObj;
    QVector<QPushButton*> buttons;
    user *thisUser;
public:
    explicit mainscreen(QStringList list, QWidget *parent = nullptr);

    ~mainscreen();

private slots:
    void on_miniProf_clicked();
    void on_bazaar_clicked();
    void openObj();

    void on_filtr_clicked();

signals:
    void closeModMini();
    void closeMini();
public slots:
    void activeWin();
private:
    Ui::mainscreen *ui;
};

#endif // MAINSCREEN_H
