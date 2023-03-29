#ifndef RECIPIEBOX_H
#define RECIPIEBOX_H

#include <QWidget>
#include "recipie.h"
#include <QString>
#include "recipiewindow.h"
//#include "clickdetectwiget.h"
#include <QGraphicsAnchorLayout>
#include <QPushButton>

namespace Ui {
class recipiebox;
}

class recipiebox : public QWidget{
    Q_OBJECT




public:
    explicit recipiebox(QWidget *parent = nullptr);
    ~recipiebox();
    void setRecipie(Recipie& r);
    Recipie* getRecipie();

private slots:
    void on_pushButton_clicked();

private:
    Ui::recipiebox *ui;
    Recipie* recipie;
};

#endif // RECIPIEBOX_H
