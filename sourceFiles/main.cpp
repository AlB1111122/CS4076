#include <iostream>
#include <string>
using std::string;
using std::cout;
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"

int main() {
    Recipie r;
    Recipie r2(r);
    std::cout << r.getTimeCreatedStr() << " " << *r.getTimeCreated() << std::endl;
    std::cout << r2.getTimeCreatedStr() << " " << *r2.getTimeCreated() << std::endl;

    Recipie rs[] = {r, r2};
    std::cout << rs[0].getTimeCreatedStr() << " " << *rs[0].getTimeCreated() << std::endl;
    std::cout << rs[1].getTimeCreatedStr() << " " << *rs[1].getTimeCreated() << std::endl;

    Account a;
    cout << a.getName();

    std::vector<Account> acs;
    acs.push_back(a);

    std::vector<Recipie> v;
    v.push_back(r);
/* a default constructor that takes no arguments
a copy constructor ex: book(const &book b);
an overloaded assignment operator
 */
    return 0;
}