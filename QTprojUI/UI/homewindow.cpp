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
    delete[] recBoxsPTRS;
}

void homewindow::setProcess(sys::processes* p){
    process = p;

    QWidget *container = new QWidget;
    ui->scrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container);
    lay->setContentsMargins(0,0,0,0);
    int noRecs = p->getRecipies()->size();
    recBoxsPTRS = new recipiebox*[noRecs];

    for(int i = 0; i < noRecs; i++){
        recipiebox* recBox = new recipiebox;
        recBoxsPTRS[i] = recBox;
        recBox->setRecipie(*p->getRecipies()->at(i));
        lay->addWidget(recBox);
    }
}

void homewindow::seeAccount(){
    accountwindow* acWindow = new accountwindow;
    acWindow->setAccount(*process->getSignedIn());
    acWindow->show();
}

/*
    QWidget *container = new QWidget;
    ui->scrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container);
    lay->setContentsMargins(0,0,0,0);
    noRecs = p->getRecipies()->size();
    recBoxsPTRS = new recipiebox*[noRecs];

    for(int i = 0; i < noRecs; i++){
        recipiebox* recBox = new recipiebox;
        recBoxsPTRS[i] = recBox;
        recBox->setRecipie(*p->getRecipies()->at(i));
        lay->addWidget(recBox);
    }
*/
