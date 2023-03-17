#ifndef PROJCLIONVER_PROCESSES_H
#define PROJCLIONVER_PROCESSES_H
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/objectNotFoundExeption.h"
#include <algorithm>

namespace sys{
    class processes {
    public:
        string login(string& uName, string& uPassword);
        Account& findAccount(string& name);

        std::vector<Recipie> findRecipies(string& nameORauthor);

        void createNewAccount(string& acName, string& acPassword);

        inline void addAccount(Account& r);
        void addAccounts(int size, Account accountsIn[]);

        inline void addRecipie(Recipie& r);
        void addRecipies(int size, Recipie recipieIn[]);

    private:
        Account signedIn;
        std::vector<Account> accounts;
        std::vector<Recipie> recipies;
    };
}
#endif //PROJCLIONVER_PROCESSES_H
