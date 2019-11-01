#include<iostream>
#include<math.h>
#include"draw_shape.h"

Shape::Shape() = default;
Shape::Shape(int x, int y, int length, char ch):_x(x), _y(y), _length(length), _ch(ch){}
bool Shape::Check(int x,int y){return true;}
void Shape::Draw(int canvas_width, int canvas_height){
	std::cout << ' ';
	for(int i=0; i<canvas_width; i++) std::cout << i;
	std::cout << '\n';
	for(int i=0; i<canvas_height; i++){
		std::cout << i;
		for(int j=0; j<canvas_width; j++){
			if(Check(j, i)) std::cout<<_ch;
			else std::cout << '.';
		}
		std::cout << '\n';
	}
};


Rectangle::Rectangle(int x, int y, int length, int width, char ch):Shape(x,y,length,ch),_width(width){}
double Rectangle::GetArea(){return _length*_width;}
double Rectangle::GetPerimeter(){return 2*(_length+_width);}
bool Rectangle::Check(int x,int y){
		return x>=_x && y>=_y && x<_x+_length && y<_y+_width;
}
//void Rectangle::Draw(int canvas_width, int canvas_height){};

Square::Square(int x, int y, int length, char ch):Shape(x,y,length,ch){}
double Square::GetArea(){return _length*_length;}
double Square::GetPerimeter(){return 4*_length;}
bool Square::Check(int x, int y){
		return x>=_x && y>=_y && x<_x+_length && y<_y+_length;
}
//void Square::Draw(int canvas_width, int canvas_height){};

Diamond::Diamond(int x, int y, int length, char ch):Shape(x,y,length,ch){}
double Diamond::GetArea(){return 2*_length*_length;}
double Diamond::GetPerimeter(){return sqrt(2)*4*_length;}
bool Diamond::Check(int x,int y){
		return abs(x-_x)+abs(y-_y)<=_length;
}
//void Diamond::Draw(int canvas_width, int canvas_height){};
