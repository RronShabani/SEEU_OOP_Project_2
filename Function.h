//
// Created by rron on 5/6/20.
//

#ifndef PROJECT_2_FUNCTION_H
#define PROJECT_2_FUNCTION_H

#include <vector>
#include "Point.h"

class Function {
protected:
    int _domain;
    std::vector<Point> function_points;
    char draw_char;
public:
    virtual int f() = 0;
    virtual void update_points();
    Point get_point(int x);
    int get_domain();
};


#endif //PROJECT_2_FUNCTION_H
