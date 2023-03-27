#include "homewindow.h"
#include "ui_homewindow.h"

homewindow::homewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homewindow){
    ui->setupUi(this);
    connect(ui->viewAccount, SIGNAL(triggered(bool)), this, SLOT(seeAccount()));
}

homewindow::~homewindow(){
    delete ui;
}

void homewindow::setProcess(sys::processes* p){
    process = p;
}

void homewindow::seeAccount(){
    accountwindow* acWindow = new accountwindow;
    acWindow->setAccount(*process->getSignedIn());
    acWindow->show();
}

