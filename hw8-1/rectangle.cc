#include<iostream>
#include"rectangle.h"

Rectangle::Rectangle(int width, int height){width_ = width, height_ = height;}

int Rectangle::getArea(){return width_ * height_;}
int Rectangle::getPerimeter(){return (width_ + height_) * 2;}

Square::Square(int width):Rectangle(width, width){}
void Square::print(){
	std::cout << width_ << 'x' << height_ << " Square\n";
	std::cout << "Area: " << getArea() << '\n';
	std::cout << "Perimeter: " << getPerimeter() << '\n';
}

NonSquare::NonSquare(int width, int height):Rectangle(width, height){}
void NonSquare::print(){
	std::cout << width_ << 'x' << height_ << " NonSquare\n";
	std::cout << "Area: " << getArea() << '\n';
	std::cout << "Perimeter: " << getPerimeter() << '\n';
}
