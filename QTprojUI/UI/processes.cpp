#include "processes.h"
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
            return "";
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

    Account* processes::getSignedIn(){
        return signedIn;
    }

    void processes::addAccount(Account& a){
        accounts[a.getName()] = a;
        std::vector<Recipie> acRecipies = a.getUsrRecipies();
        addRecipies(acRecipies);
    }

    void processes::addAccounts(int size, Account accountsIn[]){
        for(int i = 0; i < size; i++){
            addAccount(accountsIn[i]);
        }
    }

    void processes::sortRecipies(){
        std::sort(recipies.begin(),recipies.end());//this sorts aplphabeticaly
    }

    void processes::addRecipie(Recipie& r){
        recipies.push_back(&r);
    }

    void processes::addRecipies(std::vector<Recipie> & recipieIn){
        for(auto & i : recipieIn){
            addRecipie(i);
        }
        std::sort(recipies.begin(), recipies.end());//sorted alphabetically by title
    }

    void processes::createNewAccount(string& acName, string& acPassword) {
        Account account(acName, acPassword);
        addAccount(account);
    }

    std::vector<Recipie*> processes::findRecipies(searchTerms& search) {//seachterms defined in recipie
        std::vector<Recipie*> returningRecipies;
        __gnu_cxx::__normal_iterator<Recipie **, std::vector<Recipie *>> it = find_if(recipies.begin(), recipies.end(), [&search](Recipie* obj) {return search == *obj;});
        while(it != recipies.end() ){
            returningRecipies.emplace_back(*it);
            it = std::find_if (++it, recipies.end(), [&search](Recipie* obj) {return search == *obj;});
        }
        if(returningRecipies.empty()){
            throw objectNotFoundExeption();
        }else {
            return returningRecipies;
        }
    }

    std::vector<Recipie *> processes::getRecipies() {
        return recipies;
    }

   // std::unordered_map<string, Account> *processes::getAccounts() {
     //   return &accounts;
   // }

}
