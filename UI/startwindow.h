#ifndef STARTWINDOW_H
#define STARTWINDOW_H
#include "processes.h"
#include <QMainWindow>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QTextBrowser>
#include <QString>
#include "homewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StartWindow; }
QT_END_NAMESPACE

class StartWindow : public QMainWindow{
    Q_OBJECT

public:
    StartWindow(QWidget *parent = nullptr);
    ~StartWindow();
    void setProcess(sys::processes& p);

private slots:
    void loginClicked();
    void createNewAc();
    void login(string uName, string uPass);

private:
    Ui::StartWindow* ui;
    sys::processes* process;
    QPushButton* loginButton;
    QPushButton* makeNewAcButton;
    QPlainTextEdit* usernameLogInTB;
    QPlainTextEdit* passwordLogInTB;
    QTextBrowser* topText;
    QPlainTextEdit* usernameNewAcTB;
    QPlainTextEdit* passwordNewAcTB;
};
#endif // STARTWINDOW_H
