#include <vector>

#include "Graph.h"
#include "Function.h"
#include "PolynomialFunction.h"
#include "ExpFunction.h"

using namespace std;

int main() {
    Function *f1 = new PolynomialFunction(7, linear, 'x');
    Function *f2 = new PolynomialFunction(7, quadratic, '#');
    Function *f3 = new ExpFunction(7);
    Graph graph = Graph(20,10);
    (*f1).update_points();
    (*f2).update_points();
    (*f3).update_points();
    graph.add_function(f1);
    graph.add_function(f2);
    graph.add_function(f3);
    graph.draw();

    return 0;
}