//
// Created by rron on 13/05/2020.
//
#include <cmath>
#include "ExpFunction.h"

using namespace std;

ExpFunction::ExpFunction(int domain) {
    this->_domain = domain;
    this->draw_char = 'o';
}

int ExpFunction::f(int x) {
    return (int)exp(x);
}

int ExpFunction::f() {
    return 1;
}

void ExpFunction::update_points() {
    for(int x = 0; x <= _domain; x++){
        function_points.emplace_back(Point(x, f(x), draw_char));
    }
}
