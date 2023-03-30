#include "account.h"

void Account::setName(string& nameIn){
    name = nameIn;
}

Account::Account(const Account &a) {
    name = a.getName();
    password = a.getPassword();
    accountNo = a.getAccountNo();
    usrRecipies = a.getUsrRecipies();
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

collection<Recipie> Account::getUsrRecipies() const{
    return usrRecipies;
}

std::vector<Recipie*> Account::getPTRUserRecs(){
    std::vector<Recipie*> retVec;
    for(int i = 0; i < usrRecipies.size(); i++){
        retVec.push_back(&usrRecipies[i]);
    }
    return retVec;
}

void Account::addRecipie(Recipie &r) {
    usrRecipies.emplace_back(r);
}

void Account::addRecipies(int size, Recipie recipieIn[]) {
    for(int i = 0; i < size; i++){
        usrRecipies.push_back(recipieIn[i]);
    }
}

string Account::print() const {
    return name + " Account number: " + std::to_string(accountNo) + "\n";
}


