#include <iostream>
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/fileManager.h"
#include "../headerFiles/processes.h"
using sys::processes;
using std::cout;
using std::endl;
#include <chrono>

int g_noAccounts = 0;
int g_noRecipies = 0;


int main() {
    string str = "bleh";
    processes processes;
    Recipie recipie;
    Account ac(str,str);

    recipie.addInstruction(str);
    recipie.addIngreditent(str);


    ac.addRecipie(recipie);
    processes.addAccount(ac);

    std::vector<Recipie *> vector = processes.findRecipies(str);

    cout << vector[0]->getTitle();

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