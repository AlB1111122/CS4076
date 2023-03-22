#ifndef PROJCLIONVER_PROCESSES_H
#define PROJCLIONVER_PROCESSES_H
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/objectNotFoundExeption.h"
#include "../headerFiles/options.h"
#include <algorithm>
#include <unordered_map>

namespace sys{
    class processes {
    public:
        ~processes();
        string login(string& uName, string& uPassword);
        Account* findAccount(string& name);

        std::vector<Recipie*> findRecipies(string& nameORauthor, bool* ops, long int minDate, long int maxDate);

        void createNewAccount(string& acName, string& acPassword);

        inline void addAccount(Account& r);
        void addAccounts(int size, Account accountsIn[]);

        inline void addRecipie(Recipie& r);
        void addRecipies(std::vector<Recipie> & recipieIn);

        std::vector<Recipie*> getRecipies();
    private:
        Account* signedIn = new Account;
        std::unordered_map<string, Account> accounts;
        std::vector<Recipie*> recipies;
    };
}
#endif //PROJCLIONVER_PROCESSES_H
