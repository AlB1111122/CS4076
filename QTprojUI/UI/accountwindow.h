#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include "account.h"
#include <QMainWindow>
#include "recipiebox.h"

namespace Ui {
class accountwindow;
}

class accountwindow : public QMainWindow{
    Q_OBJECT

public:
    explicit accountwindow(QWidget *parent = nullptr);
    ~accountwindow();
    void setAccount(Account& a);

private:
    Ui::accountwindow *ui;
    Account* account;
    recipiebox** recBoxsPTRS;
};

#endif // ACCOUNTWINDOW_H
