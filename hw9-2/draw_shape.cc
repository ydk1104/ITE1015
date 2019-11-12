#include<iostream>
#include<math.h>
#include"draw_shape.h"

Canvas::Canvas(int row, int col){
	canvas = NULL;
	Resize(row,col);
}
Canvas::~Canvas(){delete canvas;}
void Canvas::Resize(int h, int w){
	delete canvas;
	canvas = new std::vector<std::vector<char> >(w,std::vector<char>(h));
}
bool Canvas::DrawPixel(int x, int y, char brush){
	if(x<0 || y<0) return false;
	if((*canvas).size() <= x || (*canvas)[x].size() <= y) return false;
	(*canvas)[x][y] = brush;
	return true;
}
void Canvas::Print(){
	std::cout << ' ';
	for(int i=0; i<(*canvas)[0].size(); i++) std::cout << i%10;
	std::cout << '\n';
	int cnt=0;
	for(const auto& i:*canvas){
		std::cout << cnt++;
		if(cnt>9) cnt=0;
		for(const auto& j:i){
			std::cout << j;
		}
		std::cout << '\n';
	}
}
void Canvas::Clear(){
	for(auto& i:*canvas)
		for(auto& j:i)
			j = '.';
}

Shape::Shape() = default;
Shape::Shape(int x, int y, int length, char ch):_x(x), _y(y), _length(length), _ch(ch){}
//void Shape::Draw(int canvas_width, int canvas_height) = 0;
/*
   {
	std::cout << ' ';
	for(int i=0; i<canvas_width; i++) std::cout << i;
	std::cout << '\n';
	for(int i=0; i<canvas_height; i++){
		std::cout << i;
		for(int j=0; j<canvas_width; j++){
			if(Check(i, j)) std::cout<<_ch;
			else std::cout << '.';
		}
		std::cout << '\n';
	}
}; // */
Shape::~Shape() = default;


Rectangle::Rectangle(int x, int y, int length, int width, char ch):Shape(x,y,length,ch),_width(width){}
void Rectangle::Draw(Canvas& canvas){
	for(int i=_x; i<_x+_width; i++){
		for(int j=_y; j<_y+_length; j++){
			if(!canvas.DrawPixel(i,j,_ch)) break;
		}
	}
}
void Rectangle::Print(){
	std::cout << "rect " << _x << ' ' << _y << ' ' << _length << ' ' << _width << ' ' << _ch << '\n';
}
Rectangle::~Rectangle() = default;

UpTriangle::UpTriangle(int x, int y, int length, char ch):Shape(x,y,length,ch){}
void UpTriangle::Draw(Canvas& canvas){
	for(int i=0; i<_length; i++){
		for(int j=-i; j<=i; j++){
			canvas.DrawPixel(_x+i,_y+j,_ch);
		}
	}
}
void UpTriangle::Print(){
	std::cout << "tri_up " << _x << ' ' << _y << ' ' << _length << ' ' << _ch << '\n';
}
UpTriangle::~UpTriangle() = default;

DownTriangle::DownTriangle(int x, int y, int length, char ch):Shape(x,y,length,ch){}
void DownTriangle::Draw(Canvas& canvas){
	for(int i=0; i<_length; i++){
		for(int j=-i; j<=i; j++){
			canvas.DrawPixel(_x-i, _y+j, _ch);
		}
	}
}
void DownTriangle::Print(){
	std::cout << "tri_down " << _x << ' ' << _y << ' ' << _length << ' ' << _ch << '\n';
}
DownTriangle::~DownTriangle() = default;

Diamond::Diamond(int x, int y, int length, char ch):Shape(x,y,length,ch){}
void Diamond::Draw(Canvas& canvas){
	for(int i=0; i<=_length; i++){
		for(int j=-i; j<=i; j++){
			canvas.DrawPixel(_x+i, _y+j, _ch);
		}
	}
	for(int i=0; i<_length; i++){
		for(int j=-i; j<=i; j++){
			canvas.DrawPixel(2*_length+_x-i, _y+j, _ch);
		}
	}
}
void Diamond::Print(){
	std::cout << "diamond " << _x << ' ' << _y << ' ' << _length << ' ' << _ch << '\n';
}
Diamond::~Diamond() = default;
