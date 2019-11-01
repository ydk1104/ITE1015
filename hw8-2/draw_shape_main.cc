#include<iostream>
#include"draw_shape.h"

int main(void){
	int MAX_X, MAX_Y;
	std::cin >> MAX_X >> MAX_Y;
	std::string type;
	int x,y,length,width;
	char ch;
	while(std::cin >> type >> x >> y >> length){
			if(type=="rect") std::cin >> width;
			std::cin >> ch;
			Shape* temp = NULL;
			if(type=="rect") temp = new Rectangle(x,y,length,width,ch);
			else if(type=="diamond") temp = new Diamond(x,y,length,ch);
			else if(type =="square") temp = new Square(x,y,length,ch);
			if(temp==NULL) continue;
			std::cout << "Area: " << temp->GetArea() << '\n';
			std::cout << "Perimeter: " << temp->GetPerimeter() << '\n';
			temp->Draw(MAX_X, MAX_Y);
			delete temp;
	}
}
