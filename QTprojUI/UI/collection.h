#ifndef PROJCLIONVER_COLLECTION_H
#define PROJCLIONVER_COLLECTION_H
#include <vector>
#include <string>
#include  "printable.h"
using std::string;

namespace col {
template<typename T>class collection : public std::vector<T,  std::allocator<T>>, public printable{
public:
    explicit collection(string nameIn = "Collection name"): name(std::move(nameIn)){}

    void setName(string& nameIn){name = nameIn;}

    string getName(){return name;}

    [[nodiscard]] string print() const override;

    private:
        string name;
    };

    template<typename T>
    string collection<T>::print() const {
        string recipies = name + "\n";
        for(int i = 0; i < this->size();i++){
            recipies.append(this->at(i).getTitle()).append(", ");
        }
        recipies.pop_back();
        return recipies;
    }
}
#endif //PROJCLIONVER_COLLECTION_H
