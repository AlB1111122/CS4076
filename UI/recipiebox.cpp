#include "recipiebox.h"
#include "ui_recipiebox.h"

recipiebox::recipiebox(QWidget *parent) :
    QWidget(parent), ui(new Ui::recipiebox){
    ui->setupUi(this);
    ui->pushButton->setFlat(true);

}

recipiebox::~recipiebox(){
    delete ui;
}

void recipiebox::setRecipie(Recipie& r){
    recipie = &r;
    ui->recTB->setText(QString::fromStdString(r.print()));
}

Recipie* recipiebox::getRecipie(){
    return recipie;
}

void recipiebox::on_pushButton_clicked(){
    recipiewindow* rWindow = new recipiewindow;
    rWindow->setRecipie(*recipie);
    rWindow->show();
}

