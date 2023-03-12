#ifndef PROJCLIONVER_SYSTEM_H
#define PROJCLIONVER_SYSTEM_H
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include <algorithm>

namespace sys{
    class system {
    public:
        string login(string& uName, string& uPassword);
        Account& findAccount(string& name);
        void addAcc(Account& r);
    private:
        Account signedIn;
    };
}
#endif //PROJCLIONVER_SYSTEM_H
