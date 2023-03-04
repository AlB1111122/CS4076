#include <iostream>
#include "../headerFiles/recipie.h"
int main() {
    Recipie r;
    std::cout << r.getTimeCreatedStr() << *r.getTimeCreated() << std::endl;
    Recipie r2(r);
    std::cout << r2.getTimeCreatedStr() << *r2.getTimeCreated() << std::endl;
    return 0;
}
