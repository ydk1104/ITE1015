
#include<iostream>
#include"Animals.h"

//Animal

Animal::Animal(std::string _name, int _age):name(_name),age(_age){}
Animal::~Animal(){}

//Zebra

Zebra::Zebra(std::string _name, int _age, int _numStripes):Animal(_name, _age),numStripes(_numStripes){}
void Zebra::printInfo(){
	std::cout << "Zebra, Name: " << name << ", Age: " << age
			<< ", Number of stripes: " << numStripes << '\n';
}
Zebra::~Zebra(){}

//Cat

Cat::Cat(std::string _name, int _age, std::string _favoriteToy):Animal(_name, _age),favoriteToy(_favoriteToy){}
void Cat::printInfo(){
	std::cout << "Cat, Name: " << name << ", Age: " << age
			<< ", Favorite toy: " << favoriteToy << '\n';
}
Cat::~Cat(){}
