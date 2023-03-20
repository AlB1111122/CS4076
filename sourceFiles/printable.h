#ifndef PROJCLIONVER_PRINTABLE_H
#define PROJCLIONVER_PRINTABLE_H
#include <string>
using std::string;

class printable{
public:
    virtual string print() const = 0;
};

std::ostream& operator<<(std::ostream& os, const printable& p){
    os << p.print();
    return os;
}
#endif //PROJCLIONVER_PRINTABLE_H
