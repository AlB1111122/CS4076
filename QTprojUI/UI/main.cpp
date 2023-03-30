#include "startwindow.h"
#include <QApplication>
#include <iostream>
using std::cout;
using std::endl;
#include "recipie.h"
#include "account.h"
#include "collection.h"
#include "processes.h"

int g_noAccounts;
int g_noRecipies;
//executable compiled for fedora
//https://github.com/AlB1111122/CS4076/
int main(int argc, char *argv[]){
    g_noAccounts = 0;
    g_noRecipies = 0;

    bool r0Arr[] = {false,true,false,false,true,false,false,false};

    string bredIngs[5] = {"500g strong white flour","2 tsp salt","7g sachet fast-action yeast","3 tbsp olive oil", "300ml water"};
    string bredInsts[9] = {"Mix 500g strong white flour, 2 tsp salt and a 7g sachet of fast-action yeast in a large bowl.",
                           "Make a well in the centre, then add 3 tbsp olive oil and 300ml water, and mix well. If the dough seems a little stiff, add another 1-2 tbsp water and mix well.",
                                     "Tip onto a lightly floured work surface and knead for around 10 mins.",
                           "Once the dough is satin-smooth, place it in a lightly oiled bowl and cover with cling film. Leave to rise for 1 hour until doubled in size or place in the fridge overnight.",
                                     "Line a baking tray with baking parchment. Knock back the dough (punch the air out and pull the dough in on itself) then gently mould the dough into a ball.",
                                     "Place it on the baking parchment to prove for a further hour until doubled in size.",
                           "Heat oven to 220C/fan 200C/gas 7.",
                           "Dust the loaf with some extra flour and cut a cross about 6cm long into the top of the loaf with a sharp knife.",
                                     "Bake for 25-30 mins until golden brown and the loaf sounds hollow when tapped underneath. Cool on a wire rack."};
    Recipie r0("bred","ac0", 30, 120);
    for(int i =0; i < 9;i++){
        r0.addIngreditent(bredInsts[i]);
    }
    for(int i =0; i < 5;i++){
        r0.addInstruction(bredInsts[i]);
    }
    r0.setOptions(r0Arr);

    string ingArr[5] = {"filler","filler","filler","filler","filler"};
    string instArr[5] = {"filler","filler","filler","filler","filler"};
    bool r1Arr[] = {true,true,false,false,true,true,false,true};
    Recipie r1("pasta","ac0", 40, 20,954378216);
    r1.addIngreditents(5,ingArr);
    r1.addInstructions(5,instArr);
    r1.setOptions(r1Arr);


    bool r2Arr[] = {false,false,true,false,true,true,false,true};
    Recipie r2("chiken curry","ac0", 30, 120,954378216);
    r2.addIngreditents(5,ingArr);
    r2.addInstructions(5,instArr);
    r2.setOptions(r2Arr);

    Recipie r3("fajitas","ac0", 30, 120,954378216);
    r3.addIngreditents(5,ingArr);
    r3.addInstructions(5,instArr);
    r3.setOptions(r2Arr);

    Recipie r4("hamburger","ac0", 30, 120);
    r4.addIngreditents(5,ingArr);
    r4.addInstructions(5,instArr);
    r4.setOptions(r2Arr);

    bool r4Arr[] = {false,true,true,false,true,true,true,true};
    Recipie r5("egg fied rice","ac0", 30, 120);
    r5.addIngreditents(5,ingArr);
    r5.addInstructions(5,instArr);
    r5.setOptions(r4Arr);

    sys::processes proc;

    Account a0("ac0", "password");
    Recipie rsArr[] ={r0,r1};
    a0.addRecipies(2,rsArr);
    Account a1("ac1", "password");
    a1.addRecipie(r2);
    Account a2("ac2", "password");
    Recipie rsArr2[] = {r3,r4,r5};
    a2.addRecipies(3,rsArr2);
    Account a3("ac3", "password");
    Account a4("ac4", "password");
    Account a5("ac5", "password");
    Account a6("ac6", "password");
    Account a7("ac7", "password");

    Account acArray[] = {a0,a1,a2,a3,a4,a5,a6,a7};
    proc.addAccounts(8,acArray);

    QApplication a(argc, argv);
    StartWindow w;
    w.setProcess(proc);
    w.show();

    return a.exec();
}
