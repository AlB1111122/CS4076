//
// Created by shcool on 28/02/23.
//
#ifndef PROJCLIONVER_COLLECTION_H
#define PROJCLIONVER_COLLECTION_H
#include <vector>
#include <string>
using std::string;
using std::vector;

template <class T>
class Collection : public vector<T>{
public:
    Collection();
    explicit Collection(string nameIn);
    void setName(string nameIn);
    [[nodiscard]] string getName() const;
private:
    string name;
};
#endif //PROJCLIONVER_COLLECTION_H
