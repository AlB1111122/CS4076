#include "startwindow.h"
#include <QApplication>
#include <iostream>
using std::cout;
using std::endl;
#include "recipie.h"
#include "account.h"
#include "collection.h"
#include "processes.h"

int g_noAccounts;
int g_noRecipies;

int main(int argc, char *argv[]){

    Recipie r0("bred","ac0", 30, 120);
    Recipie r1("pasta","ac0", 30, 120);
    Recipie r2("chiken curry","ac0", 30, 120);
    Recipie r3("fajitas","ac0", 30, 120);
    Recipie r4("carbonara","ac1", 30, 120);
    Recipie r5("hamburger","ac0", 30, 120);
    Recipie r6("pizza","ac0", 30, 120);
    Recipie r7("egg fied rice","ac0", 30, 120);

    sys::processes proc;

    Account a0("ac0", "password");
    Recipie rsArr[] ={r0,r1,r2,r3};
    a0.addRecipies(4,rsArr);
    Account a1("ac1", "password");
    a1.addRecipie(r4);
    Account a2("ac2", "password");
    Recipie rsArr2[] = {r5,r6,r7};
    a2.addRecipies(3,rsArr2);
    Account a3("ac3", "password");
    Account a4("ac4", "password");
    Account a5("ac5", "password");
    Account a6("ac6", "password");
    Account a7("ac7", "password");

    Account acArray[] = {a0,a1,a2,a3,a4,a5,a6,a7};
    proc.addAccounts(8,acArray);

    QApplication a(argc, argv);
    StartWindow w;
    w.setProcess(proc);
    w.show();

    return a.exec();
}
