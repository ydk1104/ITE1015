#include"print_shape.h"

Shape::~Shape(){}

Circle::Circle(double radius):radius(radius){}
double Circle::getArea(){return radius*radius*PI;}
double Circle::getPerimeter(){return radius*2*PI;}
std::string Circle::getTypeString(){return "Circle";}

Rectangle::Rectangle(double width, double height):width(width), height(height){}
double Rectangle::getArea(){return width*height;}
double Rectangle::getPerimeter(){return (width+height)*2;}
std::string Rectangle::getTypeString(){return "Rectangle";}
