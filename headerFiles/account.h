#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <utility>
#include  "../headerFiles/collection.h"
#include  "../headerFiles/recipie.h"
#include  "../headerFiles/printable.h"
using col::collection;
using std::string;

extern int g_noAccounts;

class Account : public printable{
    public:
        explicit Account(string nameIn = "name", string passwordIn = "password"):
        name(std::move(nameIn)), password(std::move(passwordIn)), usrRecipies("User created recipies"){
            g_noAccounts++;
            accountNo = g_noAccounts;
        }
        Account(Account& a);
        void setName(string& nameIn);
        [[nodiscard]]string getName() const;

        void setPassword(string& passwordIn);
        [[nodiscard]]string getPassword() const;

        [[nodiscard]]int getAccountNo() const;

        collection<Recipie>* getUsrRecipies();
        void addRecipie(Recipie& r);
        void addRecipies(int size, Recipie recipieIn[]);

        [[nodiscard]] string print() const override;

    private:
        string name;
        string password;
        int accountNo;
        collection<Recipie> usrRecipies;
};
#endif // ACCOUNT_H

