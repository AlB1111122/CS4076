#include <utility>
#include "../headerFiles/recipie.h"

Recipie::Recipie(char* titleIn, char* authorIn, int prepTimeIn, int cookTimeIn) {//string titleIn,string authorIn,
    timeCr.timeCreated = std::time(nullptr);
    struct tm tm = *localtime(getTimeCreated());
    snprintf(timeCr.timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
    strcpy(title, titleIn);
    strcpy(author, authorIn);
    prepTime = prepTimeIn;
    cookTime = cookTimeIn;
    time = prepTime + cookTime;
}

Recipie::Recipie(Recipie &r) {
    timeCr.timeCreated = *r.getTimeCreated();
    timeCr.timeCreatedStr = r.timeCr.timeCreatedStr;
    strcpy(title, r.getTitle());
    strcpy(author, r.getAuthor());
    prepTime = r.getPrepTime();
    cookTime = r.getCookTime();
    time = r.getTime();
}

const char* Recipie::getTitle() const {
    return title;
}

void Recipie::setTitle(char* titleIn){
    strcpy(title, titleIn);
}

const char* Recipie::getAuthor() const {
    return author;
}

void Recipie::setAuthor(char* authorIn) {
    strcpy(author, authorIn);
}

int Recipie::getPrepTime() const{
    return Recipie::prepTime;
}
void Recipie::setPrepTime(int prepTimeIn){
    Recipie::prepTime = prepTimeIn;
}

int Recipie::getCookTime() const{
    return Recipie::cookTime;
}
void Recipie::setCookTime(int cookTimeIn){
    Recipie::cookTime = cookTimeIn;
}

int Recipie::getTime() const{
    return time;
}
void Recipie::setTime(){
    time = cookTime + prepTime;
}

const time_t*  Recipie::getTimeCreated() const{
    return &timeCr.timeCreated;
}

const char* Recipie::getTimeCreatedStr() const{
    return timeCr.timeCreatedStr;
}
