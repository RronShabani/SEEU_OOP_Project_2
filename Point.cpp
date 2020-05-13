//
// Created by rron on 5/6/20.
//

#include <iostream>
#include "Point.h"

// Point Constructor that auto-sets the fill character
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
    this->fill = '-';
}

// Point Constructor that sets the fill character from the argument
Point::Point(int x, int y, char fill) {
    this->x = x;
    this->y = y;
    this->fill = fill;
}

int Point::get_x() {
    return this->x;
}

int Point::get_y() {
    return this->y;
}

void Point::draw() {
    std::cout << " " << fill << " ";
}

void Point::change_char(char c) {
    this->fill = c;
}

