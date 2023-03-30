#include "homewindow.h"
#include "ui_homewindow.h"

homewindow::homewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homewindow){
    ui->setupUi(this);
    connect(ui->viewAccount, SIGNAL(triggered(bool)), this, SLOT(seeAccount()));
    connect(ui->menOpSearch, SIGNAL(triggered(bool)), this, SLOT(search()));
    this->setAttribute( Qt::WA_DeleteOnClose);
}

homewindow::~homewindow(){
    delete[] recBoxsPTRS;
    delete lay;
    delete container;
    delete ui;
}

void homewindow::setProcess(sys::processes* p){
    process = p;

    container = new QWidget;
    ui->scrollArea->setWidget(container);
    lay = new QVBoxLayout(container);
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

void homewindow::search(){
    searchwindow* sWindow = new searchwindow;
    sWindow->setProcess(*process);
    sWindow->show();
    close();
}
