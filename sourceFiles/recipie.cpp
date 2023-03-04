#include <utility>
#include "../headerFiles/recipie.h"

Recipie::Recipie(string author) {
    timeCr.timeCreated = std::time(nullptr);
    struct tm tm = *localtime(getTimeCreated());
    snprintf(timeCr.timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
}

Recipie::Recipie(Recipie &r) {
    timeCr.timeCreated = *r.getTimeCreated();
    timeCr.timeCreatedStr = r.timeCr.timeCreatedStr;

}

string Recipie::getTitle() const {
    return Recipie::title;
}

void Recipie::setTitle(string titleIn){
    Recipie::title = std::move(titleIn);
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