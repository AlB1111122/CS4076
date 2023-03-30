#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QMainWindow>
#include "homewindow.h"

namespace Ui {
class searchwindow;
}

class searchwindow : public QMainWindow{
    Q_OBJECT

public:
    explicit searchwindow(QWidget *parent = nullptr);
    ~searchwindow();
    void setProcess(sys::processes& p);

private slots:
    void seeAccount();
    void goHome();
    void search();

    void on_minDateSlider_valueChanged(int value);

    void on_maxDateSlider_valueChanged(int value);

private:
    Ui::searchwindow* ui;
    sys::processes* process;
    QString processSliderNumber(long int in);
    long int minDateSec = -1;
    long int maxDateSec = -1;
    recipiebox** recBoxsPTRS = nullptr;
    QWidget* container = nullptr;
    QVBoxLayout* lay = nullptr;
};

#endif // SEARCHWINDOW_H
