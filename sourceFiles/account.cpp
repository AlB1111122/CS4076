#include "../headerFiles/account.h"

Account::Account(char* nameIn, char* passwordIn){
    strcpy(name, nameIn);
    strcpy(password, passwordIn);
    g_noAccounts++;
    accountNo = g_noAccounts;
}

void Account::setName(char* nameIn){
    strcpy(name, nameIn);
}

const char* Account::getName() const{
    return name;
}

void Account::setPassword(char* passwordIn){
    strcpy(password, passwordIn);
}

const char* Account::getPassword() const{
    return password;
}

int Account::getAccountNo() const {
    return accountNo;
}

