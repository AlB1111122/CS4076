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

int g_noAccounts;
int g_noRecipies;

int main() {
    //Recipie r;
    //r.addInstruction((string &) "instruction 1");
    //r.addIngreditent((string &) "ingredient 1");
    //f.writeRecipie(r);

    Recipie rec(fileManager::readRecipies());
    cout << rec.getTitle() << " " << rec.getAuthor() << " " << rec.getRecipieNo() << " " << rec.getPrepTime() << " " << rec.getCookTime() << " " << rec.getTime() << " " << rec.getTimeCreatedStr() << " "  << *rec.getTimeCreated() << " " <<
    rec.getIngredients()->at(0) << " " <<  rec.getInstructions()->at(0)<< " " <<
    rec.getIngredients()->at(1) << " " <<  rec.getInstructions()->at(1)
    << endl;


}
/*
 *
    char* timeCreatedStr = new char[17];
    time_t timeCreated;
    long int timeCreatedIn = 1679170811;
    auto dur = std::chrono::seconds(timeCreatedIn);
    const auto p1 = std::chrono::time_point<std::chrono::system_clock>{} + dur;
    timeCreated = std::chrono::system_clock::to_time_t(p1);

    struct tm tm = *localtime(&timeCreated);
    snprintf(timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
    cout << timeCreatedStr;

 */