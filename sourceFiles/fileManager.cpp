/*
#include <sstream>
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

Recipie fileManager::readRecipies(){//fix dosnt work
    std::ofstream accountsFile;
    accountsFile.open("../accountsF");
    if(accountsFile.fail()) {
        std::cerr << "unable to open file accountsF for reading" << std::endl;
        exit(1);
    }

    string line;

    string titleIn;
    string authorIn;
    int rNoIn;
    int prepTimeIn;
    int cookTimeIn;
    char* timeCreatedStrIn;
    time_t timeCreatedIn;
    std::vector<string> ingredientsIn;
    std::vector<string> instructionsIn;

    while(getline(std::cin, line)){
        std::istringstream lstream(line);
        lstream >> titleIn;
        lstream >> authorIn;
        lstream >> rNoIn;
        lstream >> prepTimeIn;
        lstream >> cookTimeIn;
        lstream >> *timeCreatedStrIn;
        lstream >> timeCreatedIn;
/*
        std::istringstream lstreamV1(line);

        string vecStringIn;
        while(lstream >> vecStringIn){
            ingredientsIn.push_back(vecStringIn);
        }

        std::istringstream lstreamV2(line);
        while(lstream >> vecStringIn){
            instructionsIn.push_back(vecStringIn);
        }

    }

    accountsFile << std::endl;
    accountsFile.close();
    Recipie(titleIn, authorIn, rNoIn, prepTimeIn, cookTimeIn, timeCreatedStrIn, timeCreatedIn, ingredientsIn, instructionsIn);
}
*/