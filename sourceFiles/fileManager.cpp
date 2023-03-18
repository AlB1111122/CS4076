#include "../headerFiles/fileManager.h"

void fileManager::writeRecipie(const Recipie& r) {
    std::ofstream accountsFile;
    accountsFile.open("../accountsF", std::fstream::app);
    if(accountsFile.fail()){
        std::cerr << "unable to open file accountsF for writing" << std::endl;
        exit(1);
    }
    accountsFile << r.title << " " << r.author << " " << r.recipieNo << " " << r.prepTime << " " << r.cookTime << " " << r.time << " " << r.timeCreatedStr << " " << r.timeCreated << std::endl;
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


Recipie fileManager::readRecipie() {//fix dosnt work
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
    time_t timeCreatedIn;
    std::vector<string> ingredientsIn;
    std::vector<string> instructionsIn;

    std::string line;
    while (getline(accountsFile, line)){
        std::istringstream lineStream(line);
        while (lineStream){
            lineStream >> titleIn;
            lineStream >> authorIn;
            lineStream >> rNoIn;
            lineStream >> prepTimeIn;
            lineStream >> cookTimeIn;
            lineStream >> timeCreatedIn;
        }
        ingredientsIn.emplace_back("instruction 1");
        instructionsIn.emplace_back("ingredient 1");
    }
    accountsFile.close();
    return Recipie(titleIn, authorIn, rNoIn, prepTimeIn, cookTimeIn, timeCreatedIn, ingredientsIn,instructionsIn);
}
