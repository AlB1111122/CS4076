#include "recipiebox.h"
#include "ui_recipiebox.h"

recipieBox::recipieBox(QWidget *parent) :
    QDockWidget(parent), ui(new Ui::recipieBox){
    ui->setupUi(this);
}

recipieBox::~recipieBox(){
    delete ui;
}
