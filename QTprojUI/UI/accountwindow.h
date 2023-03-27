#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include "account.h"
#include <QMainWindow>

namespace Ui {
class accountwindow;
}

class accountwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit accountwindow(QWidget *parent = nullptr);
    ~accountwindow();
    void setAccount(Account& a);

private:
    Ui::accountwindow *ui;
    Account* account;
};

#endif // ACCOUNTWINDOW_H
