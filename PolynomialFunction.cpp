//
// Created by rron on 5/6/20.
//

#include "PolynomialFunction.h"

void PolynomialFunction::update_points() {
    switch(f_type){
        case constant:
            for(int x = 0; x <= _domain; x++){
                function_points.emplace_back(Point(x, 1, draw_char));
            }
        case linear:
            for(int x = 0; x <= _domain; x++){
                function_points.emplace_back(Point(x, f(x), draw_char));
            }
            break;
        case quadratic:
            for(int x = 0; x <= _domain; x++){
                function_points.emplace_back(Point(x, f(x,1,2), draw_char));
            }
            break;
        default:
            break;
    }
}

int PolynomialFunction::f() {
    return 0;
}

int PolynomialFunction::f(int x) {
    return x;
}

int PolynomialFunction::f(int x, int slope) {
    return slope * x;
}

int PolynomialFunction::f(int x, int slope, int power) {
    return slope * pow(x, power);
}

PolynomialFunction::PolynomialFunction(int domain, e type, char draw_char) {
    _domain = domain;
    f_type = type;
    this->draw_char = draw_char;
}
