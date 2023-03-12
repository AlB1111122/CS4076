#include "../headerFiles/system.h"

namespace sys{

    std::vector<Account> accounts;

    string system::login(string& uName, string& uPassword){
        Account attemptingIn = findAccount(uName);
        if(attemptingIn.getPassword() == uPassword){
            signedIn = attemptingIn;
            return "Welcome back " + uName;
        }else{
            return "Username or password is incorrect";
        }
    }

    Account& system::findAccount(string& name){
        auto it = find_if(accounts.begin(), accounts.end(), [&name](const Account& obj) {return obj.getName() == name;});
        if (it != accounts.end()){
            return *it;
        }
    }

    void system::addAcc(Account& r){
        accounts.push_back(r);
    }
}