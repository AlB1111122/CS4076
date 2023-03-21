#include "../headerFiles/processes.h"
namespace sys{

    processes::~processes() {
        signedIn = nullptr;
        delete signedIn;
    }

    string processes::login(string& uName, string& uPassword){
        Account* attemptingIn;
        try {
            attemptingIn = findAccount(uName);
        }catch(objectNotFoundExeption &e){
            return uName + " " + e.exeption();
        }
        if(attemptingIn->getPassword() == uPassword){
            signedIn = attemptingIn;
            return "Welcome back " + signedIn->getName();
        }else{
            return "Username or password is incorrect";
        }
    }

    Account* processes::findAccount(string& name){
        try {
            return &accounts.at(name);//i know this is a bad use of exeptions but i could think of anywhere else
        }catch(std::exception &e){
            throw objectNotFoundExeption();
        }
    }

    void processes::addAccount(Account& r){
        accounts[r.getName()] = r;
        std::vector<Recipie>* acRecipies = r.getUsrRecipies();
        addRecipies(*acRecipies);
    }

    void processes::addAccounts(int size, Account accountsIn[]){
        for(int i = 0; i < size; i++){
            addAccount(accountsIn[i]);
        }
    }

    void processes::addRecipie(Recipie& r){
        recipies.push_back(&r);
    }

    void processes::addRecipies(std::vector<Recipie> & recipieIn){
        for(auto & i : recipieIn){
            addRecipie(i);
        }
    }

    void processes::createNewAccount(string& acName, string& acPassword) {
        Account account(acName, acPassword);
        addAccount(account);
    }

    std::vector<Recipie*> processes::findRecipies(string& nameORauthor) {//tofinish
        std::vector<Recipie> returningRecipies;
        

        return recipies;
    }


}