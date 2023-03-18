#ifndef PROJCLIONVER_FILEMANAGER_H
#define PROJCLIONVER_FILEMANAGER_H
#include "../headerFiles/recipie.h"
#include "../headerFiles/collection.h"
#include <sstream>
using std::cout;
using std::endl;


class fileManager {
public:
    static void writeRecipie(const Recipie& r);
    static Recipie readRecipie();

    //void writeCollection(const col::collection<class T>& c);
};


#endif //PROJCLIONVER_FILEMANAGER_H
