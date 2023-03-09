#include "../headerFiles/recipie.h"

Recipie::Recipie(char* titleIn, char* authorIn, int prepTimeIn, int cookTimeIn) {//string titleIn,string authorIn,
    g_noRecipies++;
    recipieNo = g_noRecipies;
    timeCreated = std::time(nullptr);
    struct tm tm = *localtime(getTimeCreated());
    snprintf(timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
    strcpy(title, titleIn);
    strcpy(author, authorIn);
    prepTime = prepTimeIn;
    cookTime = cookTimeIn;
    setTime();
}

Recipie::Recipie(const Recipie &r) {
    g_noRecipies++;
    recipieNo = g_noRecipies;//bc need to have it marked as a diff one for strage/load for acc
    timeCreated = *r.getTimeCreated();
    timeCreatedStr = r.timeCreatedStr;
    strcpy(title, r.getTitle());
    strcpy(author, r.getAuthor());
    prepTime = r.getPrepTime();
    cookTime = r.getCookTime();
    time = r.getTime();
}



Recipie::~Recipie() {
    delete[] timeCreatedStr;
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

int Recipie::getRecipieNo() const{
    return recipieNo;
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
    return &timeCreated;
}

char* Recipie::getTimeCreatedStr() const {
    return timeCreatedStr;
}

std::vector<char*>* Recipie::getIngredients(){
    return &ingredients;
}

std::vector<char*>* Recipie::getInstructions(){
    return &instructions;
}

