//
// Created by rron on 5/6/20.
//

#ifndef PROJECT_2_GRAPH_H
#define PROJECT_2_GRAPH_H

#include "Point.h"
#include "Function.h"
#include "PolynomialFunction.h"

class Graph {
private:
    int _x_size;
    int _y_size;
    std::vector<Point> points;
public:
    Graph(int x_size, int y_size);
    void draw();
    Point* get_point(int, int);
    void add_function(Function*);
};


#endif //PROJECT_2_GRAPH_H
