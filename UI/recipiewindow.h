#ifndef RECIPIEWINDOW_H
#define RECIPIEWINDOW_H

#include <QMainWindow>
#include "recipie.h"
#include <QString>

namespace Ui {
class recipiewindow;
}

class recipiewindow : public QMainWindow{
    Q_OBJECT

public:
    explicit recipiewindow(QWidget *parent = nullptr);
    ~recipiewindow();
    void setRecipie(Recipie& r);

private slots:
    void on_pushButton_clicked();

private:
    Ui::recipiewindow* ui;
    Recipie* recipie;
};

#endif // RECIPIEWINDOW_H
