//
// Created by stefan on 08.04.2022.
//

#include <cstring>
#include "Circle.h"
bool Circle :: operator== (Punct p) {

    //d(centu, p) <= raza
    // sqrt(
    // pow(|centru.x - p.x|, 2)
    // +
    // pow(|centru.y - p.y|, 2)
    // )

    if(p.x == this->x && p.y == this->y)
        return true;
    return false;
}

bool Circle::operator>(Punct p) {

    if(this->x > p.x && this->y > p.y)
        return true;
    return false;
}

int Circle::operator[](char *prop) {
    // "x" || "y" || "ray"
    if(strcmp(prop, "x") == 0)
        return this->x;

    if(strcmp(prop, "y") == 0)
        return this->y;

    if(strcmp(prop, "ray") == 0)
        return this->ray;

}
