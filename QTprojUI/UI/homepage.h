#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include "processes.h"
#include <QWidget>

namespace Ui {
class homePage;
}

class homePage : public QWidget{
    Q_OBJECT

public:
    explicit homePage(QWidget *parent = nullptr);
    ~homePage();
    void setProcess(sys::processes* p);

private:
    Ui::homePage *ui;
    sys::processes* process;
};

#endif // HOMEPAGE_H
