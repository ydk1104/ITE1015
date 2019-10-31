#include<iostream>
#include<string>
#include"number.h"

std::string get[3] = {
"getNumber(): ", "getSquare(): ", "getCube()"
};

void funcNumber(int number){
	Number temp;
	temp.setNumber(number);
	std::cout << get[0] << temp.getNumber() << '\n';
}

void funcSquare(int number){
	Square temp;
	temp.setNumber(number);
	std::cout << get[0] << temp.getNumber() << '\n';
	std::cout << get[1] << temp.getSquare() << '\n';
}

void funcCube(int number){
	Cube temp;
	temp.setNumber(number);
	std::cout << get[0] << temp.getNumber() << '\n';
	std::cout << get[1] << temp.getSquare() << '\n';
	std::cout << get[2] << temp.getCube() << '\n';
}

int main(void){
	std::string input; int number, ans;
	while(std::cin >> input >> number){
		if(input == "number"){
			funcNumber(number);
		}
		else if(input == "square"){
			funcSquare(number);
		}
		else if(input == "cube"){
			funcCube(number);
		}
		else continue;
	}
}
