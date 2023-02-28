#ifndef RECIPIE_H
#define RECIPIE_H
#include <string>
#include "../headerFiles/collection.h"
#include <ctime>
#include <cstdio>

using std::string;
using std::vector;

class Recipie{
public:
    Recipie();
    Recipie(Recipie &r);
    [[nodiscard]] string getTitle() const;
    void setTitle(string titleIn);

    [[nodiscard]] int getPrepTime() const;
    void setPrepTime(int prepTimeIn);

    [[nodiscard]] int getCookTime() const;
    void setCookTime(int cookTimeIn);

    [[nodiscard]] int getTime() const;
    void setTime();

    [[nodiscard]] const time_t* getTimeCreated() const;
    [[nodiscard]] const char* getTimeCreatedStr() const;

    //maybe privatize later
    Collection <string> ingredients = Collection<string>("Ingredients");
    Collection <string> instructions = Collection<string>("Instructions");;

private:
    string title;
    int prepTime;
    int cookTime;
    int time;
    time_t timeCreated;
    char *timeCreatedStr;
};

#endif // RECIPIE_H
