#ifndef PROJCLIONVER_OBJECTNOTFOUNDEXEPTION_H
#define PROJCLIONVER_OBJECTNOTFOUNDEXEPTION_H
#include <exception>
#include <string>

class objectNotFoundExeption : public std::exception {
public:
    std::string exeption() {
        return "Error: Not found\n";
    }
};
#endif
