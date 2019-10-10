#include<iostream>
#include"simple_shape.h"

void circle::input(){
	std::cin >> x >> y >> r;
}

double circle::area(){
	return r*r*PI;
}

double circle::perimeter(){
	return r*2*PI;
}

void rectangle::input(){
	std::cin >> x1 >> y1 >> x2 >> y2;
}

double rectangle::area(){
	return (x2-x1) * (y1-y2);
}

double rectangle::perimeter(){
	return (x2-x1 + y1-y2) * 2;
}
