#include <utility>
#include "../headerFiles/account.h"

Account::Account(string nameIn, string passwordIn){
    name = std::move(nameIn);
    password = std::move(passwordIn);
    g_noAccounts++;
    accountNo = g_noAccounts;
}

void Account::setName(string nameIn){
    name = std::move(nameIn);
}

string Account::getName() const{
    return name;
}

void Account::setPassword(string passwordIn){
    password = std::move(passwordIn);
}

string Account::getPassword() const{
    return password;
}

