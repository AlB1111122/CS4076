#ifndef RECIPIE_H
#define RECIPIE_H
#include <utility>
#include <cstring>
#include <string>
using std::string;
#include <ctime>
#include <cstdio>
#include <vector>
#include <fstream>
#include <iostream>

extern int g_noRecipies;
class Recipie{
    friend class fileManager;
public:
    explicit Recipie(string titleIn = "title", string authorIn = "author", int prepTimeIn = 10, int cookTimeIn = 20);
    Recipie(const Recipie &r);
    Recipie(string& titleIn, string& author, int rNoIn, int prepTimeIn, int cookTimeIn, char* timeCreatedStrIn,
            time_t timeCreatedIn, std::vector<string>& ingredientsIn, std::vector<string>& instructionsIn);
    ~Recipie();

    [[nodiscard]] string getTitle() const;
    void setTitle(string& titleIn);

    [[nodiscard]] string getAuthor() const;
    void setAuthor(string& authorIn);

    [[nodiscard]] int getRecipieNo() const;

    [[nodiscard]] int getPrepTime() const;
    void setPrepTime(int prepTimeIn);

    [[nodiscard]] int getCookTime() const;
    void setCookTime(int cookTimeIn);

    [[nodiscard]] int getTime() const;

    [[nodiscard]] const time_t* getTimeCreated() const;
    [[nodiscard]] char * getTimeCreatedStr() const;

    std::vector<string>* getIngredients();
    std::vector<string>* getInstructions();


private:
    string title;
    string author;
    int recipieNo;
    int prepTime;
    int cookTime;
    int time;
    char* timeCreatedStr = new char[17];
    time_t timeCreated;
    std::vector<string> ingredients;
    std::vector<string> instructions;
    void setTime();
};
#endif // RECIPIE_H
