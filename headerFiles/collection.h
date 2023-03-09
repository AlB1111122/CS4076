#ifndef PROJCLIONVER_COLLECTION_H
#define PROJCLIONVER_COLLECTION_H
#include <vector>
#include <cstring>

namespace col {
    template<typename T>class collection : public std::vector<T, std::allocator<T>> {
    public:
        collection(char* nameIn){
            strcpy(name,nameIn);
        }

        char* getName(){
            return name;
        }
    private:
        char name[30];
    };
}

#endif //PROJCLIONVER_COLLECTION_H
