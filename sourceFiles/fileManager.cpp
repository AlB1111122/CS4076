#include "../headerFiles/fileManager.h"

void fileManager::writeRecipie(const Recipie& r) {
    std::ofstream accountsFile;
    accountsFile.open("../accountsF", std::fstream::app);
    if(accountsFile.fail()){
        std::cerr << "unable to open file accountsF for writing" << std::endl;
        exit(1);
    }
    accountsFile << r.title << " " << r.author << " " << r.recipieNo << " " << r.prepTime << " " << r.cookTime << " " << r.timeCreated << std::endl;
    for(auto & ingredient : r.ingredients){
        accountsFile << ingredient << " ";
    }
    accountsFile << std::endl;
    for(auto & instruction : r.instructions){
        accountsFile << instruction << " ";
    }
    accountsFile << std::endl;
    accountsFile.close();
}


Recipie fileManager::readRecipies() {
    std::ifstream accountsFile;
    accountsFile.open("../accountsF",std::fstream::in);
    if (accountsFile.fail()) {
        std::cerr << "unable to open file accountsF for reading" << std::endl;
        exit(1);
    }

    string titleIn;
    string authorIn;
    int rNoIn;
    int prepTimeIn;
    int cookTimeIn;
    long int timeCreatedIn;
    std::vector<string> ingredientsIn;
    std::vector<string> instructionsIn;

    std::string line;
    getline(accountsFile, line);
    std::istringstream lineStream(line);
        lineStream >> titleIn;
        lineStream >> authorIn;
        lineStream >> rNoIn;
        lineStream >> prepTimeIn;
        lineStream >> cookTimeIn;
        lineStream >> timeCreatedIn;

    getline(accountsFile, line);
    std::istringstream ingStream(line);
    while(ingStream){
        int i = 0;
        string ing;
        ingStream >> ing;
        ingredientsIn.emplace_back(ing);
        i++;
    }
    getline(accountsFile, line);
    std::istringstream instStream(line);
    while(instStream){
        int i = 0;
        string inst;
        instStream >> inst;
        instructionsIn.emplace_back(inst);
        i++;
    }
    accountsFile.close();
    return Recipie(Recipie(titleIn, authorIn, rNoIn, prepTimeIn, cookTimeIn, timeCreatedIn, ingredientsIn,instructionsIn));
}
