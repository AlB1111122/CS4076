#include <iostream>

using std::cout;
using std::endl;
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/fileManager.h"
#include "../headerFiles/processes.h"
using sys::processes;

int g_noAccounts;
int g_noRecipies;

int main() {
    Recipie test;
    Account a("u1", "p1");
    Account a1;
    Account a2("1", "p");

    processes p;
    Account as[3] = {a,a1,a2};
    p.addAccounts(3, as);
    string n = "u1";
    string pa = "p1";
    cout << p.login(n,pa);
}