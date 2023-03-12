#ifndef PROJCLIONVER_FILEMANAGER_H
#define PROJCLIONVER_FILEMANAGER_H
#include "../headerFiles/recipie.h"
class fileManager {
public:
    void writeRecipie(const Recipie& r);
    Recipie readRecipies();
};


#endif //PROJCLIONVER_FILEMANAGER_H
