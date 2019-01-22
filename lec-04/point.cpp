// FILE: point.cpp
// CLASS IMPLEMENTED: point (See point.h for documentation.)

#include "point.h"


bool operator==(const point& p1, const point& p2){
    return p1.get_x()==p2.get_x() && p1.get_y() == p2.get_y();
}

point operator+(const point& p1, const point& p2){
    point p3;
    p3.x = p1.get_x() + p2.get_x();
    p3.y = p1.get_y() + p2.get_y();
    return p3;
}

ostream& operator<<(ostream& out, point p1){
    out<<"("<<p1.get_x()<<", "<<p1.get_y()<<")"<<endl;
    return out;
}


point::point(double initial_x, double initial_y)
{
    x = initial_x;   // Constructor sets the point to a given position.
    y = initial_y;
}


void point::shift(double x_amount, double y_amount)
{
    x += x_amount;
    y += y_amount;   
}


void point::rotate90( )
{
    double new_x;
    double new_y;

    new_x = y;  // For a 90 degree clockwise rotation, the new x is the original y,
    new_y = -x; // and the new y is -1 times the original x.
    x = new_x;
    y = new_y; 
}
