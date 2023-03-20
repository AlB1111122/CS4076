#ifndef PROJCLIONVER_OPTIONS_H
#define PROJCLIONVER_OPTIONS_H
#include <cstdint>
namespace op {
    union options {
        struct {
            uint8_t vegan: 1;
            uint8_t vegetarian: 1;
            uint8_t sugarFree: 1;
            uint8_t glutenFree: 1;
            uint8_t shellfishFree: 1;
            uint8_t eggFree: 1;
            uint8_t quick: 1;
            uint8_t noOven: 1;
        };
        uint8_t dietWord;
    };
}
#endif //PROJCLIONVER_OPTIONS_H
