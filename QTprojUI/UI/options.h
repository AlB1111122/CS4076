#ifndef PROJCLIONVER_OPTIONS_H
#define PROJCLIONVER_OPTIONS_H
#include <cstdint>

namespace op {
        struct options{
            uint8_t vegan: 1;
            uint8_t vegetarian: 1;
            uint8_t sugarFree: 1;
            uint8_t glutenFree: 1;
            uint8_t shellfishFree: 1;
            uint8_t dairyFree: 1;
            uint8_t quick: 1;
            uint8_t noOven: 1;

            bool operator == (const options& other) const{
                if(vegan == true && other.vegan == false) {//only care that the feilds selected are true unselected fields can be true or false
                    return false;
                }
                if(vegetarian == true && other.vegetarian == false) {
                    return false;
                }
                if(sugarFree == true && other.sugarFree == false) {
                    return false;
                }
                if(glutenFree == true && other.glutenFree == false) {
                    return false;
                }
                if(shellfishFree == true && other.shellfishFree == false) {
                    return false;
                }
                if(dairyFree == true && other.dairyFree == false) {
                    return false;
                }
                if(quick == true && other.quick == false) {
                    return false;
                }
                if(noOven == true && other.noOven == false) {
                    return false;
                }
                return true;
            }

            void setOptions(const bool *ops) {
                vegan = ops[0];
                vegetarian = ops[1];
                sugarFree = ops[2];
                glutenFree = ops[3];
                shellfishFree = ops[4];
                dairyFree = ops[5];
                quick = ops[6];
                noOven = ops[7];
            }
        };
}


#endif //PROJCLIONVER_OPTIONS_H
