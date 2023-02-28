//
// Created by shcool on 28/02/23.
//
#include <utility>

#include "../headerFiles/collection.h"

template<class T>Collection<T>::Collection()= default;

template<class T>Collection<T>::Collection(string nameIn){
    name = std::move(nameIn);
}

template<class T> void Collection<T>::setName(string nameIn) {
    name = std::move(nameIn);
}

template<class T> string Collection<T>::getName() const {
    return name;
}