#ifndef PROJCLIONVER_PRINTABLE_H
#define PROJCLIONVER_PRINTABLE_H
#include <ostream>

class printable{
    friend std::ostream& operator<<(std::ostream& os, const printable& p){
        os << p.print();
        return os;
    }
public:
    [[nodiscard]] virtual std::string print() const = 0;
};

#endif //PROJCLIONVER_PRINTABLE_H
