#include <iostream>
#include <string>
#include <vector>

#include "Point.h"
#include "PolynomialFunction.h"
#include "Graph.h"

using namespace std;

int main() {
    Function *f1 = new PolynomialFunction(7, linear, 'x');
    Function *f2 = new PolynomialFunction(7, quadratic, 'o');
    Graph graph = Graph(20,10);
    (*f1).update_points();
    (*f2).update_points();
    graph.add_function(f1);
    graph.add_function(f2);
    graph.draw();

    return 0;
}