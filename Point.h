//
// Created by rron on 5/6/20.
//

#ifndef PROJECT_2_POINT_H
#define PROJECT_2_POINT_H

#include <vector>

class Point {
private:
    int x;
    int y;
    char fill;
public:
    Point(int x, int y);
    Point(int x, int y, char fill);
    int get_x();
    int get_y();
    void draw();
    void change_char(char c);
};


#endif //PROJECT_2_POINT_H
