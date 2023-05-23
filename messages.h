#ifndef MESSAGES_H
#define MESSAGES_H

#include <QWidget>

namespace Ui {
class messages;
}

class messages : public QWidget
{
    Q_OBJECT

public:
    explicit messages(QWidget *parent = nullptr);
    ~messages();

private:
    Ui::messages *ui;
};

#endif // MESSAGES_H
