#include<iostream>
#include"circle.h"

int main(void){
	double r;
	std::cin >> r;
	std::cout << "Perimeter: " << getCirclePerimeter(r) << '\n';
	std::cout << "Area: " << getCircleArea(r) << '\n';
}
