#ifndef PROJCLIONVER_PROCESSES_H
#define PROJCLIONVER_PROCESSES_H
#include "recipie.h"
#include "account.h"
#include "collection.h"
#include "objectNotFoundExeption.h"
#include "options.h"
#include <algorithm>
#include <unordered_map>
using std::unordered_map;

namespace sys{

    class processes {
    public:
        ~processes();
        string login(string& uName, string& uPassword);
        Account* findAccount(string& name);
        Account* getSignedIn();

        void createNewAccount(string& acName, string& acPassword);

        inline void addAccount(Account& r);
        void addAccounts(int size, Account accountsIn[]);

        inline void addRecipie(Recipie& r);
        void addRecipies(std::vector<Recipie> & recipieIn);

        std::vector<Recipie*> findRecipies(searchTerms& search);
        std::vector<Recipie*> getRecipies();

        void sortRecipies();

       // std::unordered_map<string, Account>* getAccounts();

    private:
        Account* signedIn = new Account;
        std::unordered_map<std::string, Account> accounts;
        std::vector<Recipie*> recipies;
    };
}
#endif //PROJCLIONVER_PROCESSES_H
