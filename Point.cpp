//
// Created by rron on 5/6/20.
//

#include <iostream>
#include "Point.h"

Point::Point(int x, int y) {
    point.push_back(x);
    point.push_back(y);
    this->display = '-';
}

Point::Point(int x, int y, char c) {
    point.push_back(x);
    point.push_back(y);
    display = c;
}

int Point::get_x() {
    return point.at(0);
}

int Point::get_y() {
    return point.at(1);
}

void Point::draw() {
    std::cout << " " << display << " ";
}

void Point::change_char(char c) {
    this->display = c;
}

