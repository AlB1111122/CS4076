#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H
#include "processes.h"
#include "accountwindow.h"
#include "recipiewindow.h"
#include <QMainWindow>
#include <QAction>
#include <QVBoxLayout>
#include <QWidget>
#include "recipie.h"
#include "searchwindow.h"

namespace Ui {
class homewindow;
}

class homewindow : public QMainWindow{
    Q_OBJECT

public:
    explicit homewindow(QWidget *parent = nullptr);
    ~homewindow();
    void setProcess(sys::processes* p);

private slots:
    void seeAccount();
    void search();

private:
    Ui::homewindow *ui;
    sys::processes* process;
    recipiebox** recBoxsPTRS = nullptr;
    QWidget* container = nullptr;
    QVBoxLayout* lay = nullptr;
};

#endif // HOMEWINDOW_H
