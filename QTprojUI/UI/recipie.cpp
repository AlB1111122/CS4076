#include <utility>

#include "recipie.h"
Recipie::Recipie(string titleIn, string authorIn, int prepTimeIn, int cookTimeIn) {
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
    bool ops[8] = {false,false,false,false,false,false,false,false};
    options.setOptions(ops);
}

Recipie::Recipie(const Recipie &r) {
    //g_noRecipies++;
    recipieNo = r.getRecipieNo();
    timeCreated = *r.getTimeCreated();
    strcpy(timeCreatedStr,r.getTimeCreatedStr());
    title = r.getTitle();
    author = r.getAuthor();
    prepTime = r.getPrepTime();
    cookTime = r.getCookTime();
    time = r.getTime();
    options = r.getOptions();
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
    int i = ingredients.size() + 1;
    ingredients.emplace_back(std::to_string(i) + ". " + ingredient);
}

void Recipie::addIngreditents(int size, string ingredientsIn[]) {
    for(int i = 0; i < size; i++){
        addIngreditent(ingredientsIn[i]);
    }
}

void Recipie::addInstruction(string &instruction) {
    int i = instructions.size() + 1;
    instructions.emplace_back(std::to_string(i) + ". " + instruction);
}

void Recipie::addInstructions(int size, string instructionsIn[]) {
    for(int i = 0; i < size; i++){
        addInstruction(instructionsIn[i]);
    }
}

op::options Recipie::getOptions() const {
    return options;
}

string Recipie::print() const {
    string info = title + " by " + author + "\n" +
            getTagsStr() + "\n" +
            timeCreatedStr;
    return info;
}

string Recipie::getTagsStr() const{
    string tags = "";
    struct cmpr{uint16_t i:1;}cmpr;
    cmpr.i = 1;
    string* arrayOps = new string[] {"vegan", "vegetarian", "sugar free", "gluten free", "shellfish free", "dairy free", "quick", "no oven" };
    if(options.vegan == cmpr.i){
        tags.append(arrayOps[0]).append(", ");
    }
    if(options.vegetarian == cmpr.i){
        tags.append(arrayOps[1]).append(", ");
    }
    if(options.sugarFree == cmpr.i){
        tags.append(arrayOps[2]).append(", ");
    }
    if(options.glutenFree == cmpr.i){
        tags.append(arrayOps[3]).append(", ");
    }
    if(options.shellfishFree == cmpr.i){
        tags.append(arrayOps[4]).append(", ");
    }
    if(options.dairyFree == cmpr.i){
        tags.append(arrayOps[5]).append(", ");
    }
    if(options.quick == cmpr.i){
        tags.append(arrayOps[6]).append(", ");
    }
    if(options.noOven == cmpr.i){
        tags.append(arrayOps[7]).append(", ");
    }
    if(!tags.empty()) {
        tags.pop_back();
        tags.pop_back();
        return tags.append("\n");
    }
    return "";
}

void Recipie::setOptions(bool *ops) {
    options.setOptions(ops);
}



