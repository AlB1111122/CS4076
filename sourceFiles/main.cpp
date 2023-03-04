#include <iostream>
#include <string>
using std::string;
using std::cout;
#include "../headerFiles/recipie.h"

int main() {
    Recipie r;
    Recipie r2(r);
    std::cout << r.getTimeCreatedStr() << *r.getTimeCreated() << std::endl;
    std::cout << r2.getTimeCreatedStr() << *r2.getTimeCreated() << std::endl;

    std::vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << g1[2];
    return 0;
}