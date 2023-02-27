#include "../headerFiles/recipie.h"

Recipie::Recipie() {
    timeCreated = std::time(nullptr);
    struct tm tm = *localtime(getTimeCreated());
    snprintf(timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
}

string Recipie::getTitle() const{
    return Recipie::title;
}
void Recipie::setTitle(string &titleIn){
    Recipie::title = titleIn;
}

int Recipie::getPrepTime() const{
    return Recipie::prepTime;
}
void Recipie::setPrepTime(int &prepTimeIn){
    Recipie::prepTime = prepTimeIn;
}

int Recipie::getCookTime() const{
    return Recipie::cookTime;
}
void Recipie::setCookTime(int &cookTimeIn){
    Recipie::cookTime = cookTimeIn;
}

int Recipie::getTime() const{
    return time;
}
void Recipie::setTime(){
    time = cookTime + prepTime;
}

const time_t*  Recipie::getTimeCreated() const{
    return &timeCreated;
}

const char* Recipie::getTimeCreatedStr() const{
    return timeCreatedStr;
}

string Recipie::getIngredient(int &i) const{
    return ingredients.at(i);
}

void Recipie::addIngredient(string &ingredient){
    ingredients.emplace_back(ingredient);
}

void Recipie::addAllIngredients(string ingredientsIn[], int sz){
    for(int i = 0; i < sz; i++){
        ingredients.emplace_back(ingredientsIn[i]);
    }
}

string Recipie::getInstruction(int &i) const{
    return ingredients.at(i);
}

void Recipie::addInstruction(string &ingredient){
    ingredients.emplace_back(ingredient);
}

void Recipie::addAllInstructions(string ingredientsIn[], int sz){
    for(int i = 0; i < sz; i++){
        ingredients.emplace_back(ingredientsIn[i]);
    }
}

