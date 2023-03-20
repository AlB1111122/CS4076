#ifndef PROJCLIONVER_PRINTABLE_H
#define PROJCLIONVER_PRINTABLE_H
#include <ostream>

class printable{
public:
    [[nodiscard]] virtual std::string print() const = 0;
};

//<< operator overloaded in main
#endif //PROJCLIONVER_PRINTABLE_H
