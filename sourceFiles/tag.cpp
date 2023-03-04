//
// Created by shcool on 04/03/23.
//

#include <utility>

#include "../headerFiles/tag.h"

tag::tag(std::string typeIn) {
    type = std::move(typeIn);
}
