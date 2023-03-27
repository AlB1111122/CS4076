#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H
#include "processes.h"
#include "accountwindow.h"
#include "recipiewindow.h"
#include <QMainWindow>
#include <QAction>

namespace Ui {
class homewindow;
}

class homewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit homewindow(QWidget *parent = nullptr);
    ~homewindow();
    void setProcess(sys::processes* p);

private slots:
    void seeAccount();

private:
    Ui::homewindow *ui;
    sys::processes* process;
};

#endif // HOMEWINDOW_H
