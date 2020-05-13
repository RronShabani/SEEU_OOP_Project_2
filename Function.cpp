//
// Created by rron on 5/6/20.
//

#include "Function.h"


Point Function::get_point(int x) {
        return function_points.at(x);
}

int Function::get_domain() {
    return _domain;
}

void Function::update_points() {
    for(int x = 0; x <= _domain; x++){
        function_points.emplace_back(Point(x, f(), draw_char));
    }
}
