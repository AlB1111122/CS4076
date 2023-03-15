#include "../headerFiles/processes.h"
namespace sys{

    string processes::login(string& uName, string& uPassword){
        Account attemptingIn;
        try {
            attemptingIn = findAccount(uName);
        }catch(objectNotFoundExeption &e){
            return uName + " " + e.exeption();
        }
        if(attemptingIn.getPassword() == uPassword){
            signedIn = attemptingIn;
            return "Welcome back " + uName;
        }else{
            return "Username or password is incorrect";
        }
    }

    Account& processes::findAccount(string& name){
        auto it = find_if(accounts.begin(), accounts.end(), [&name](const Account& obj) {return obj.getName() == name;});
        if (it != accounts.end()){
            return *it;
        }else{
            throw objectNotFoundExeption();
        }
    }

    void processes::addAccount(Account& r){
        accounts.push_back(r);
    }

    void processes::addAccounts(int size, Account accountsIn[]){
        for(int i = 0; i < size; i++){
            addAccount(accountsIn[i]);
        }
    }

    void processes::addRecipie(Recipie& r){
        recipies.push_back(r);
    }

    void processes::addRecipie(int size, Recipie recipieIn[]){
        for(int i = 0; i < size; i++){
            addRecipie(recipieIn[i]);
        }
    }
}