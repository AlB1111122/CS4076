#include "../headerFiles/recipie.h"

Recipie::Recipie(char* titleIn, char* authorIn, int prepTimeIn, int cookTimeIn) {//string titleIn,string authorIn,
    timeCreated = std::time(nullptr);
    struct tm tm = *localtime(getTimeCreated());
    snprintf(timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
    strcpy(title, titleIn);
    strcpy(author, authorIn);
    prepTime = prepTimeIn;
    cookTime = cookTimeIn;
    setTime();
}

Recipie::Recipie(Recipie &r) {
    timeCreated = *r.getTimeCreated();
    timeCreatedStr = r.timeCreatedStr;
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

time_t*  Recipie::getTimeCreated() {
    return &timeCreated;
}

char* Recipie::getTimeCreatedStr() const {
    return timeCreatedStr;
}
