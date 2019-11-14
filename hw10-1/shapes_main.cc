#include<iostream>
#include<vector>
#include"shapes.h"

int main(void){
	double tri_width,tri_height,rect_width,rect_height;
	std::cin >> tri_width >> tri_height >> rect_width >> rect_height;
	std::vector<Shape*> shapes;
	shapes.push_back(new Triangle(tri_width,tri_height));
	shapes.push_back(new Rectangle(rect_width,rect_height));
	for(const auto& i:shapes){std::cout << i->getArea() << '\n'; delete i;}
}
