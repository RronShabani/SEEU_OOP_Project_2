//
// Created by rron on 5/6/20.
//
#include <iostream>
#include <iomanip>
#include "Graph.h"
#include "PolynomialFunction.h"

using namespace std;

// Constructor for Graph
// Initializes the graph size and creates a grid of that size
Graph::Graph(int x_size, int y_size) {
    _x_size = x_size;
    _y_size = y_size;

    // Populates the point list with "empty" points
    for(int y = 0; y <= y_size; y++){
        for(int x = 0; x <= _x_size; x++){
            points.emplace_back(x,y);
        }
    }
}

// Draws the graph on the screen
void Graph::draw() {
    // We start y at max size because drawing happens from top to bottom
    // consequence of drawing on a terminal using ASCII
    for(int y = _y_size; y >= 0; y--){
        cout << setw(3) << y; // prints numbers for y coordinate
        for(int x = 0; x <= _x_size; x++){
         get_point(x,y)->draw();
     }
     cout << endl;
    }

    // Prints the final row - numbers for the x coordinate
    cout << setw(2) << "";
    for(int i = 0; i <= _x_size; i++){
        cout << setw(3) << i;
    }
}

// Returns the point at the position (x,y) in the graph
Point* Graph::get_point(int x, int y) {
    return &points.at(x+(_x_size+1)*y);
}

// Adds a function to be displayed in the graph by replacing the "empty" points
// with points where the added function is defined
void Graph::add_function(Function *f) {
    for(int x = 0; x <= _x_size; x++){
        if(x > f->get_domain())  // Makes sure we are within horizontal bounds of function definition
            break;
        if((*f).get_point(x).get_y() <= _y_size) // Makes sure we are within vertical bounds of the graph
            *get_point(x,(*f).get_point(x).get_y()) = (*f).get_point(x); // Replaces point
    }
    // Since program only graphs the first quadrant there is no need for additional checks
    // as long as the functions don't have negative x or y values
}
