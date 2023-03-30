#include "accountwindow.h"
#include "ui_accountwindow.h"

accountwindow::accountwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accountwindow){
    ui->setupUi(this);
    this->setAttribute( Qt::WA_DeleteOnClose);
}

accountwindow::~accountwindow(){
    delete[] recBoxsPTRS;
    delete lay;
    delete container;
    delete ui;
}

void accountwindow::setAccount(Account &a){
    ui->acNameTB->setText(QString::fromStdString(a.getName()));
    ui->acNoTB->setText(QString::number(a.getAccountNo()));
    ui->userRecTB->setText(QString::fromStdString(a.getUsrRecipies().getName()));

    container = new QWidget;
    ui->scrollArea->setWidget(container);
    lay = new QVBoxLayout(container);
    lay->setContentsMargins(0,0,0,0);
    int noRecs = a.getUsrRecipies().size();
    recBoxsPTRS = new recipiebox*[noRecs];

    for(int i = 0; i < noRecs; i++){
        recipiebox* recBox = new recipiebox;
        recBoxsPTRS[i] = recBox;
        recBox->setRecipie(*a.getPTRUserRecs().at(i));
        lay->addWidget(recBox);
    }
}

