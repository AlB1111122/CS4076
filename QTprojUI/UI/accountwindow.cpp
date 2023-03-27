#include "accountwindow.h"
#include "ui_accountwindow.h"

accountwindow::accountwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accountwindow){
    ui->setupUi(this);
}

accountwindow::~accountwindow(){
    delete ui;
}

void accountwindow::setAccount(Account &a){
    ui->acNameTB->setText(QString::fromStdString(a.getName()));
    ui->acNoTB->setText(QString::number(a.getAccountNo()));
    //for(Recipie r : a.getUsrRecipies()){
      //  ui->recipieList->addItem(r);
    //}
}
/*
 *         string name;
        string password;
        int accountNo;
        collection<Recipie> usrRecipies;
 * */
