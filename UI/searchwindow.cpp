#include "searchwindow.h"
#include "ui_searchwindow.h"

searchwindow::searchwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::searchwindow){
    ui->setupUi(this);
    connect(ui->actionView_my_account, SIGNAL(triggered(bool)), this, SLOT(seeAccount()));
    connect(ui->actionHome, SIGNAL(triggered(bool)), this, SLOT(goHome()));
    connect(ui->searchButton, SIGNAL(clicked()), this, SLOT(search()));
    this->setAttribute( Qt::WA_DeleteOnClose);
    ui->maxDateSlider->setValue(-1);
    ui->minDateSlider->setValue(-1);

}

searchwindow::~searchwindow(){
    delete[] recBoxsPTRS;
    delete lay;
    delete container;
    delete ui;
}

void searchwindow::setProcess(sys::processes& p){
    process = &p;
}

void searchwindow::seeAccount(){
    accountwindow* acWindow = new accountwindow;
    acWindow->setAccount(*process->getSignedIn());
    acWindow->show();
}

void searchwindow::goHome(){
    homewindow* hPage = new homewindow;
    hPage->setProcess(process);
    hPage->show();
    close();
}

QString searchwindow::processSliderNumber(long int i){
    char* timeCreatedStr = new char[8];
    time_t timeCreated = i;
    time_t* timeCreatedPTR = &timeCreated;
    struct tm tm = *localtime(timeCreatedPTR);
    snprintf(timeCreatedStr, 8, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1);
    QString retStr = QString(timeCreatedStr);
    delete[] timeCreatedStr;
    return retStr;
}

void searchwindow::searchwindow::search(){
    string searchString = ui->searchStringTB->toPlainText().toStdString();
    if(ui->acRadBut->isChecked()){
        try{
            accountwindow* acWindow = new accountwindow;
            acWindow->setAccount(*process->findAccount(searchString));
            acWindow->show();
        }catch(objectNotFoundExeption e){
            ui->errorMessageBox->setText(QString::fromStdString(e.exeption()));
        }
    }else if(ui->recRadBut->isChecked()){
        searchTerms sT;

        bool opsArr[8];
        opsArr[0] = ui->CBvegan->isChecked();
        opsArr[1] = ui->CBvegetarian->isChecked();
        opsArr[2] = ui->CBsugarFree->isChecked();
        opsArr[3] = ui->CBglutenFree->isChecked();
        opsArr[4] = ui->CBshellfishFree->isChecked();
        opsArr[5] = ui->CBdairyFree->isChecked();
        opsArr[6] = ui->CBquick->isChecked();
        opsArr[7] = ui->CBnoOven->isChecked();

        sT.title = searchString;
        sT.options.setOptions(opsArr);
        sT.minDate = minDateSec;
        sT.maxDate = maxDateSec;
        std::vector<Recipie*> foundRecs;
        try{
            foundRecs = process->findRecipies(sT);
            ui->errorMessageBox->setText("");
            container = new QWidget;
            ui->scrollArea->setWidget(container);
            lay = new QVBoxLayout(container);
            lay->setContentsMargins(0,0,0,0);
            int noRecs = foundRecs.size();
            recBoxsPTRS = new recipiebox*[noRecs];

            for(int i = 0; i < noRecs; i++){
                recipiebox* recBox = new recipiebox;
                recBoxsPTRS[i] = recBox;
                recBox->setRecipie(*foundRecs.at(i));
                lay->addWidget(recBox);
            }
        }catch(objectNotFoundExeption e){
            ui->errorMessageBox->setText(QString::fromStdString(e.exeption()));
        }
    }
}

void searchwindow::on_minDateSlider_valueChanged(int value){
    if(value != -1){
        minDateSec = 539182800 +(value * 2678400);//50 year time gap starts whn it does bc 2038 prob
        ui->minDateTB->setText(processSliderNumber(minDateSec));
    }else{
         ui->minDateTB->setText("no minimum date");
    }
}


void searchwindow::on_maxDateSlider_valueChanged(int value){
    if(value != -1){
        maxDateSec = 539182800 +(value * 2678400);
        ui->maxDateTB->setText(processSliderNumber(maxDateSec));
    }else{
        ui->maxDateTB->setText("no maximum date");
   }
}

