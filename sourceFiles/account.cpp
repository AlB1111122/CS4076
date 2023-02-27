#include "../headerFiles/account.h"

Account::Account(string &nameIn, string &passwordIn){
    name = nameIn;
    password = passwordIn;
}

void Account::setName(string &nameIn){
    name = nameIn;
}

string Account::getName() const{
    return name;
}

void Account::setPassword(string &passwordIn){
    password = passwordIn;
}

string Account::getPassword() const{
    return password;
}

