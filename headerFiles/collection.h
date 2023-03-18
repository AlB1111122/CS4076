#ifndef PROJCLIONVER_COLLECTION_H
#define PROJCLIONVER_COLLECTION_H
#include <vector>
#include <string>
using std::string;

namespace col {
template<typename T>class collection : public std::vector<T, std::allocator<T>>{
public:
        explicit collection(string nameIn = "Collection name"): name(std::move(nameIn)){}

        void setName(string& nameIn){name = nameIn;}

        string getName(){return name;}

    private:
        string name;
    };
}
#endif //PROJCLIONVER_COLLECTION_H
