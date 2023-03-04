#ifndef RECIPIE_H
#define RECIPIE_H
#include <string>
#include <ctime>
#include <cstdio>
#include <vector>
using std::string;

class Recipie{
    struct{
        time_t timeCreated;
        char *timeCreatedStr;
    }timeCr;
public:
    explicit Recipie(string author);
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
private:
    string title;
    string author;
    int prepTime;
    int cookTime;
    int time;
};

#endif // RECIPIE_H
