#include "recipiewindow.h"
#include "ui_recipiewindow.h"

recipiewindow::recipiewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recipiewindow){
    ui->setupUi(this);
    this->setAttribute( Qt::WA_DeleteOnClose);
}

recipiewindow::~recipiewindow(){
    delete ui;
}

void recipiewindow::setRecipie(Recipie& r){
    recipie = &r;
    ui->titleTB->setText(QString::fromStdString(r.getTitle()));
    ui->authorTB->setText(QString::fromStdString(r.getAuthor()));
    ui->rNoTB->setText(QString::number(r.getRecipieNo()));
    ui->prepTimeTB->setText(QString::number(r.getPrepTime()));
    ui->cookTimeTB->setText(QString::number(r.getCookTime()));
    ui->timeTB->setText(QString::number(r.getTime()));
    ui->tagListTB->setText(QString::fromStdString(r.getTagsStr()));
    ui->timeCreatedTB->setText(QString(r.getTimeCreatedStr()));
    int noIng = r.getIngredients()->size();
    int noInst = r.getInstructions()->size();
    for(string s : *r.getIngredients()){
        ui->ingList->addItem(QString::fromStdString(s));
    }
    for(string s : *r.getInstructions()){
        ui->instList->addItem(QString::fromStdString(s));
    }
}

void recipiewindow::on_pushButton_clicked(){
    this->close();
}

