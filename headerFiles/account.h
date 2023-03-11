#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <utility>
#include  "../headerFiles/collection.h"
using col::collection;
using std::string;

extern int g_noAccounts;
class Account {
    public:
        Account(string nameIn = "name", string passwordIn = "password"):
        name(std::move(nameIn)), password(std::move(passwordIn)), recipies("User created recipies"){
            g_noAccounts++;
            accountNo = g_noAccounts;
        }

        void setName(string& nameIn);
        [[nodiscard]]string getName() const;
        void setPassword(string& passwordIn);
        [[nodiscard]]string getPassword() const;
        [[nodiscard]]int getAccountNo() const;
        collection<int>* getUsrRecipies();
    private:
        string name;
        string password;
        int accountNo;
        collection<int> recipies;
};
#endif // ACCOUNT_H

