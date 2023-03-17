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

collection<Recipie>* Account::getUsrRecipies() {
    return &usrRecipies;
}

void Account::addRecipie(Recipie &r) {
    usrRecipies.emplace_back(r);
}

void Account::addRecipies(int size, Recipie recipieIn[]) {
    for(int i = 0; i < size; i++){
        usrRecipies[i] = recipieIn[i];
    }
}



