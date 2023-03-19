#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <utility>
#include  "../headerFiles/collection.h"
#include  "../headerFiles/recipie.h"

using col::collection;
using std::string;

extern int g_noAccounts;
class Account {
    public:
        Account(string nameIn, string passwordIn):
        name(std::move(nameIn)), password(std::move(passwordIn)), usrRecipies("User created recipies"){
            g_noAccounts++;
            accountNo = g_noAccounts;
        }
        void setName(string& nameIn);
        [[nodiscard]]string getName() const;

        void setPassword(string& passwordIn);
        [[nodiscard]]string getPassword() const;

        [[nodiscard]]int getAccountNo() const;

        collection<Recipie>* getUsrRecipies();
        void addRecipie(Recipie& r);
        void addRecipies(int size, Recipie recipieIn[]);

    private:
        string name;
        string password;
        int accountNo;
        collection<Recipie> usrRecipies;
};
#endif // ACCOUNT_H

