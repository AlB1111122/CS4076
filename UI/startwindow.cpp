#include "startwindow.h"
#include "./ui_startwindow.h"

StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::StartWindow){
    ui->setupUi(this);
    loginButton = ui->loginButton;
    makeNewAcButton = ui->createNewAcButton;
    usernameLogInTB = ui->usernameLogInTB;
    passwordLogInTB = ui->passwordLogInTB;
    topText = ui->textBrowser;
    usernameNewAcTB = ui->usernameNewAcTB;
    passwordNewAcTB = ui->passwordNewAcTB;
    connect(makeNewAcButton, SIGNAL(clicked()), this, SLOT(createNewAc()));
    connect(loginButton, SIGNAL(clicked()), this, SLOT(loginClicked()));
}

StartWindow::~StartWindow(){
    delete ui;
}

void StartWindow::setProcess(sys::processes& p){
    process = &p;
}

void StartWindow::loginClicked(){
    string uName = usernameLogInTB->toPlainText().toStdString();
    string uPass = passwordLogInTB->toPlainText().toStdString();
    login(uName,uPass);
}

void StartWindow::createNewAc(){
    string uName = usernameNewAcTB->toPlainText().toStdString();
    string uPass = passwordNewAcTB->toPlainText().toStdString();
    try{
        process->findAccount(uName);
    }catch(objectNotFoundExeption e){
        process->createNewAccount(uName,uPass);
        login(uName,uPass);
        return;
    }
    topText->setText("Username unavailable");
    topText->setAlignment(Qt::AlignCenter);
}

void StartWindow::login(string uName, string uPass){
    process->sortRecipies();
    if(!(uName == "" || uPass == "")){
        QString didLIsucseed = QString::fromStdString(process->login(uName,uPass));
        if(didLIsucseed == ""){
            homewindow* hPage = new homewindow;
            hPage->setProcess(process);
            hPage->show();
            close();
        }else{
            topText->setText(didLIsucseed);
            topText->setAlignment(Qt::AlignCenter);
        }
    }
}

