#include <iostream>
#include <string>
using std::string;
using std::cout;
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"

int main() {
    Recipie r;
    Recipie r2(r);
    std::cout << r.getTimeCreatedStr() << *r.getTimeCreated() << std::endl;
    std::cout << r2.getTimeCreatedStr() << *r2.getTimeCreated() << std::endl;

    Account a;
    cout << a.getName();
    return 0;
}