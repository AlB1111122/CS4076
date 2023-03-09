#ifndef RECIPIE_H
#define RECIPIE_H
#include <cstring>
#include <ctime>
#include <cstdio>
#include <vector>
#include <fstream>

extern int g_noRecipies;
class Recipie{
public:
    explicit Recipie(char* titleIn = "title",char* authorIn = "author",int prepTimeIn = 10, int cookTimeIn = 20);
    Recipie(const Recipie &r);
    ~Recipie();

    [[nodiscard]] const char *getTitle() const;
    void setTitle(char* titleIn);

    [[nodiscard]]const char* getAuthor() const;
    void setAuthor(char* authorIn);

    [[nodiscard]] int getRecipieNo() const;

    [[nodiscard]] int getPrepTime() const;
    void setPrepTime(int prepTimeIn);

    [[nodiscard]] int getCookTime() const;
    void setCookTime(int cookTimeIn);

    [[nodiscard]] int getTime() const;
    void setTime();

    [[nodiscard]] const time_t* getTimeCreated() const;
    [[nodiscard]] char* getTimeCreatedStr() const;

    std::vector<char*>* getIngredients();
    std::vector<char*>* getInstructions();


private:
    char title[30];
    char author[30];
    int recipieNo;
    int prepTime;
    int cookTime;
    int time;
    char* timeCreatedStr = new char[17];
    time_t timeCreated;
    std::vector<char*> ingredients;
    std::vector<char*> instructions;
};
#endif // RECIPIE_H
