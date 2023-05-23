#ifndef PROFILEVIEW_H
#define PROFILEVIEW_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class profileView;
}

class profileView : public QWidget
{
    Q_OBJECT
    user *thisUser;
    userProfile *thisProfile;
public:
    explicit profileView(user *thatUser, QWidget *parent = nullptr);
    ~profileView();

private slots:

    void on_backBut_clicked();

private:
    Ui::profileView *ui;
};

#endif // PROFILEVIEW_H
