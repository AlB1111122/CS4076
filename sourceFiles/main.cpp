#include <iostream>
using std::cout;
using std::endl;
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"

int g_noAccounts;
int g_noRecipies;
int main() {
    Account r;
    col::collection<Account> c("name");
    c.push_back(r);

    cout<< c[0].getName() << endl;

    return 0;
}