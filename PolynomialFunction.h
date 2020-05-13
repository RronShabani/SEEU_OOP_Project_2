//
// Created by rron on 5/6/20.
//

#ifndef PROJECT_2_POLYNOMIALFUNCTION_H
#define PROJECT_2_POLYNOMIALFUNCTION_H

#include <string>
#include <cmath>
#include "Function.h"

enum e {
    constant,
    linear,
    quadratic
};
using namespace std;

class PolynomialFunction: public Function{
private:
    e f_type;
public:
    PolynomialFunction(int domain, e type, char draw_char);
    int f() override;
    int f(int x);
    int f(int x, int slope);
    int f(int x, int slope, int power);
    void update_points() override;
};


#endif //PROJECT_2_POLYNOMIALFUNCTION_H
