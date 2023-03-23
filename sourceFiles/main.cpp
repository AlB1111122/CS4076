#include <iostream>
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/processes.h"
#include "../headerFiles/options.h"
using std::cout;
using std::endl;


int g_noAccounts = 0;
int g_noRecipies = 0;

int main() {

    Recipie r0("bred","ac0", 30, 120);
    Recipie r1("pasta","ac0", 30, 120);
    Recipie r2("chiken curry","ac0", 30, 120);
    Recipie r3("fajitas","ac0", 30, 120);
    Recipie r4("carbonara","ac1", 30, 120);
    Recipie r5("hamburger","ac0", 30, 120);
    Recipie r6("pizza","ac0", 30, 120);
    Recipie r7("egg fied rice","ac0", 30, 120);

    sys::processes proc;

    Account a0("ac0", "password");
    Recipie rsArr[] ={r0,r1,r2,r3};
    a0.addRecipies(4,rsArr);


       Account a1("ac1", "password");
       a1.addRecipie(r4);
       Account a2("ac2", "password");
       Recipie rsArr2[] = {r5,r6,r7};
       a2.addRecipies(3,rsArr2);
       Account a3("ac3", "password");
       Account a4("ac4", "password");
       Account a5("ac5", "password");
       Account a6("ac6", "password");
       Account a7("ac7", "password");

    Account acArray[] = {a0,a1,a2,a3,a4,a5,a6,a7};//
    proc.addAccounts(8,acArray);

    string s = "enji";
    proc.findAccount(s);
}
/*
 *

    Recipie rec(fileManager::readRecipies());
    cout << rec.getTitle() << " " << rec.getAuthor() << " " << rec.getRecipieNo() << " " << rec.getPrepTime() << " " << rec.getCookTime() << " " << rec.getTime() << " " << rec.getTimeCreatedStr() << " "  << *rec.getTimeCreated() << " " <<
    rec.getIngredients()->at(0) << " " <<  rec.getInstructions()->at(0)<< " " <<
    rec.getIngredients()->at(1) << " " <<  rec.getInstructions()->at(1)
    << endl;

        std::vector<Recipie> rec = fileManager::readRecipies();
    cout << rec[0].getTitle() << " " << rec[0].getAuthor() << " " << rec[0].getRecipieNo() << " " << rec[0].getPrepTime() << " " << rec[0].getCookTime() << " " << rec[0].getTime() << " " << rec[0].getTimeCreatedStr() << " "  << *rec[0].getTimeCreated() << " " <<
         rec[0].getIngredients()->at(0) << " " <<  rec[0].getInstructions()->at(0) <<
         "\n" <<

         rec[1].getTitle() << " " << rec[1].getAuthor() << " " << rec[1].getRecipieNo() << " " << rec[1].getPrepTime() << " " << rec[1].getCookTime() << " " << rec[1].getTime() << " " << rec[1].getTimeCreatedStr() << " "  << *rec[1].getTimeCreated() << " " <<
         rec[1].getIngredients()->at(0) << " " <<  rec[1].getInstructions()->at(0) <<
          endl;
 */