//
// Created by rron on 13/05/2020.
//

#ifndef PROJECT_2_EXPFUNCTION_H
#define PROJECT_2_EXPFUNCTION_H


#include "Function.h"

class ExpFunction: public Function {
public:
    ExpFunction(int);
    int f() override;
    int f(int x);
    void update_points() override;
};


#endif //PROJECT_2_EXPFUNCTION_H
