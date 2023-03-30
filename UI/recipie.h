#ifndef RECIPIE_H
#define RECIPIE_H
#include <utility>
#include <cstring>
#include <string>
using std::string;
#include <ctime>
#include <chrono>
#include <cstdio>
#include <vector>
#include <fstream>
#include <iostream>
#include "options.h"
#include "printable.h"

extern int g_noRecipies;
struct searchTerms{
    string title;
    op::options options;
    long int minDate = -1;
    long int maxDate = -1;
};

class Recipie : public printable{
    friend class processes;
public:
    explicit Recipie(string titleIn = "title", string authorIn = "author", int prepTimeIn = 10, int cookTimeIn = 20);
    Recipie(string titleIn, string authorIn, int prepTimeIn, int cookTimeIn, long int timeCreatedIn);
    Recipie(const Recipie &r);
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

    [[nodiscard]] op::options getOptions() const;
    void setOptions(bool* ops);

    void addIngreditent(string& ingredient);
    void addIngreditents(int size, string ingredientsIn[]);

    void addInstruction(string& instruction);
    void addInstructions(int size, string instructionsIn[]);

    std::vector<string>* getIngredients();
    std::vector<string>* getInstructions();

    [[nodiscard]] string getTagsStr() const;
    [[nodiscard]] string print() const override;

    bool operator < (const Recipie &other) const {
        return title < other.getTitle();
    }

    bool operator == (const searchTerms& search){
        if(title.contains(search.title) && search.options == options && (timeCreated >= search.minDate && (timeCreated <= search.maxDate || search.maxDate == -1))){
                return true;
        }else{
            return false;
        }
    }
    std::vector<string> ingredients;
    std::vector<string> instructions;

private:
    string title;
    string author;
    int recipieNo;
    int prepTime;
    int cookTime;
    int time;
    char* timeCreatedStr = new char[17];
    time_t timeCreated;
    op::options options;
    void setTime();
};
#endif // RECIPIE_H
