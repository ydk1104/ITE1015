#include"shapes.h"

Shape::Shape(double width, double height):width(width),height(height){}
Shape::~Shape(){}

Triangle::Triangle(double width, double height):Shape(width,height){}
double Triangle::getArea(){return width*height/2;}

Rectangle::Rectangle(double width, double height):Shape(width,height){}

double Rectangle::getArea(){return width*height;}
