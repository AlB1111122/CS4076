#include "../headerFiles/recipie.h"
Recipie::Recipie(string titleIn, string authorIn, int prepTimeIn, int cookTimeIn) {//string titleIn,string authorIn,
    g_noRecipies++;
    recipieNo = g_noRecipies;
    timeCreated = std::time(nullptr);
    struct tm tm = *localtime(getTimeCreated());
    snprintf(timeCreatedStr, 17, "%d-%02d-%02d %02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min);
    title = std::move(titleIn);
    author = std::move(authorIn);
    prepTime = prepTimeIn;
    cookTime = cookTimeIn;
    setTime();
}

Recipie::Recipie(const Recipie &r) {
    g_noRecipies++;
    recipieNo = g_noRecipies;//bc need to have it marked as a diff one for strage/load for acc
    timeCreated = *r.getTimeCreated();
    strcpy(timeCreatedStr,r.getTimeCreatedStr());
    title = r.getTitle();
    author = r.getAuthor();
    prepTime = r.getPrepTime();
    cookTime = r.getCookTime();
    time = r.getTime();
}

//char title[30], char author[30], int recipieNo, int prepTime, int cookTime, int time, char* timeCreatedStr = new char[17], time_t timeCreated, std::vector<char*> ingredients, std::vector<char*> instructions,
Recipie::Recipie(string& titleIn, string& authorIn, int rNoIn, int prepTimeIn, int cookTimeIn, char* timeCreatedStrIn,
                 time_t timeCreatedIn, std::vector<string>& ingredientsIn, std::vector<string>& instructionsIn) {
    title = titleIn;
    author = authorIn;
    recipieNo = rNoIn;
    prepTime = prepTimeIn;
    cookTime = cookTimeIn;
    setTime();
    strcpy(timeCreatedStr,timeCreatedStrIn);
    timeCreated = timeCreatedIn;
    ingredients = ingredientsIn;
    instructions = instructionsIn;
}

Recipie::~Recipie() {
    delete[] timeCreatedStr;
}

string Recipie::getTitle() const {
    return title;
}

void Recipie::setTitle(string& titleIn){
    title = titleIn;
}

string Recipie::getAuthor() const {
    return author;
}

void Recipie::setAuthor(string& authorIn) {
    author = authorIn;
}

int Recipie::getRecipieNo() const{
    return recipieNo;
}

int Recipie::getPrepTime() const{
    return Recipie::prepTime;
}
void Recipie::setPrepTime(int prepTimeIn){
    Recipie::prepTime = prepTimeIn;
    setTime();
}

int Recipie::getCookTime() const{
    return Recipie::cookTime;
}
void Recipie::setCookTime(int cookTimeIn){
    Recipie::cookTime = cookTimeIn;
    setTime();
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

char * Recipie::getTimeCreatedStr() const {
    return timeCreatedStr;
}

std::vector<string>* Recipie::getIngredients(){
    return &ingredients;
}

std::vector<string>* Recipie::getInstructions(){
    return &instructions;
}

