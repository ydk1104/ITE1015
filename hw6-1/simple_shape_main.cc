#include<iostream>
#include"simple_shape.h"

int main(void){
	std::cout << "shape?" << '\n';
	char type;
	std::cin >> type;
	if(type=='C'){
		circle x;
		x.input();
		std::cout << "area: " << x.area() << ", perimeter: " << x.perimeter() << '\n';
	}
	if(type=='R'){
		rectangle x;
		x.input();
		std::cout << "area: " << x.area() << ", perimeter: " << x.perimeter() << '\n';
	}
}
