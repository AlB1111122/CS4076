#include "accountwindow.h"
#include "ui_accountwindow.h"

accountwindow::accountwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accountwindow){
    ui->setupUi(this);
    this->setAttribute( Qt::WA_DeleteOnClose);
}

accountwindow::~accountwindow(){
    delete ui;
    delete[] recBoxsPTRS;
}

void accountwindow::setAccount(Account &a){
    ui->acNameTB->setText(QString::fromStdString(a.getName()));
    ui->acNoTB->setText(QString::number(a.getAccountNo()));

    QWidget *container = new QWidget;
    ui->scrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container);
    lay->setContentsMargins(0,0,0,0);
    int noRecs = a.getUsrRecipies().size();
    recBoxsPTRS = new recipiebox*[noRecs];

    for(int i = 0; i < noRecs; i++){
        recipiebox* recBox = new recipiebox;
        recBoxsPTRS[i] = recBox;
        recBox->setRecipie(a.getUsrRecipies().at(i));
        lay->addWidget(recBox);
    }
}

