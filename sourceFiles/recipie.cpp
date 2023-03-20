#include <utility>

#include "../headerFiles/recipie.h"
Recipie::Recipie(string titleIn, string authorIn, int prepTimeIn, int cookTimeIn, uint8_t bitWord) {//string titleIn,string authorIn,
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
    options.dietWord = bitWord;
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
    if(cookTime == 0){
        options.noOven = 1;
    }
    setTime();
}

int Recipie::getTime() const{
    return time;
}
void Recipie::setTime(){
    time = cookTime + prepTime;
    if(time < 20){
        options.quick = 1;
    }
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

void Recipie::addIngreditent(string &ingredient) {
    ingredients.emplace_back(ingredient);
}

void Recipie::addIngreditents(int size, string ingredientsIn[]) {
    for(int i = 0; i < size; i++){
        addIngreditent(ingredientsIn[i]);
    }
}

void Recipie::addInstruction(string &instruction) {
    instructions.emplace_back(instruction);
}

void Recipie::addInstructions(int size, string instructionsIn[]) {
    for(int i = 0; i < size; i++){
        addInstruction(instructionsIn[i]);
    }
}

op::options Recipie::getOptions() const {
    return options;
}

void Recipie::setOptions(uint8_t bitWord) {
    options.dietWord = bitWord;
}

string Recipie::print() const {
    string info = author + " by " + author + "\n" +
            timeCreatedStr;
    return info;
}

