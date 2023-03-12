#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/fileManager.h"
#include "../headerFiles/system.h"
using sys::system;

int g_noAccounts;
int g_noRecipies;
int main() {
    Account r;
    class system sys;
    sys.addAcc(r);

    string ns = "name";
    string ps = "passworda";
    cout << sys.login(ns, ps);
}