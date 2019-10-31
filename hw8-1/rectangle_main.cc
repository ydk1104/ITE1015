#include<iostream>
#include<string>
#include"rectangle.h"

int main(void){
	std::string input;
	while(input != "quit"){
		if(input == "square"){
			int width;
			std::cin >> width;
			Square temp = Square(width);
			temp.print();
		}
		if(input == "nonsquare"){
			int width, height;
			std::cin >> width >> height;
			NonSquare temp = NonSquare(width, height);
			temp.print();
		}
		std::cin >> input;
	}
}
