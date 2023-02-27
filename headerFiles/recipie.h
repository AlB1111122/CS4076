#ifndef RECIPIE_H
#define RECIPIE_H
#include <string>
#include <vector>
#include <ctime>
#include <cstdio>
using namespace std;

class Recipie{
public:
    Recipie();
    [[nodiscard]] string getTitle() const;
    void setTitle(string &titleIn);

    [[nodiscard]] int getPrepTime() const;
    void setPrepTime(int &prepTimeIn);

    [[nodiscard]] int getCookTime() const;
    void setCookTime(int &cookTimeIn);

    [[nodiscard]] int getTime() const;
    void setTime();

    [[nodiscard]] const time_t* getTimeCreated() const;
    [[nodiscard]] const char* getTimeCreatedStr() const;

    string getIngredient(int &i) const;
    void addIngredient(string &ingredient);
    void addAllIngredients(string ingredientsIn[], int sz);

    string getInstruction(int &i) const;
    void addInstruction(string &instruction);
    void addAllInstructions(string instructions[],int sz);

private:
    string title;
    int prepTime;
    int cookTime;
    int time;
    time_t timeCreated;
    char *timeCreatedStr = new char[17];
    vector<string> ingredients;
    vector<string> instructions;
};

#endif // RECIPIE_H
