#include<iostream>
#include<vector>
#include"print_shape.h"

int main(void){
	char type = 0;
	std::vector<Shape*> shapes;
	while(type != '0'){
		if(type == 'c'){
			double radius;
			std::cin >> radius;
			shapes.push_back(new Circle(radius));
		}
		else if(type == 'r'){
			double width, height;
			std::cin >> width >> height;
			shapes.push_back(new Rectangle(width, height));
		}
		std::cin >> type;
	}
	for(const auto& i : shapes){
		std::cout << i->getTypeString() << ' '
				  << i->getArea() << ' '
				  << i->getPerimeter() << '\n';
		delete i;
	}
}
