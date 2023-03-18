#include <iostream>
#include "../headerFiles/recipie.h"
#include "../headerFiles/account.h"
#include "../headerFiles/collection.h"
#include "../headerFiles/fileManager.h"
#include "../headerFiles/processes.h"
using sys::processes;
using std::cout;
using std::endl;

int g_noAccounts;
int g_noRecipies;

int main() {
    fileManager f;
    //Recipie r;
    //r.addInstruction((string &) "instruction 1");
    //r.addIngreditent((string &) "ingredient 1");
    //f.writeRecipie(r);
    Recipie rec(f.readRecipie());
    cout << rec.getTitle() << " " << rec.getTimeCreatedStr() << " " << rec.getIngredients()->at(0) << " " <<  rec.getInstructions()->at(0) << endl;
}