#include "../headerFiles/account.h"

void Account::setName(string& nameIn){
    name = nameIn;
}

string Account::getName() const{
    return name;
}

void Account::setPassword(string& passwordIn){
    password = passwordIn;
}

string Account::getPassword() const{
    return password;
}

int Account::getAccountNo() const {
    return accountNo;
}

collection<int>* Account::getUsrRecipies() {
    return &recipies;
}



