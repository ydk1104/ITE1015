#include<iostream>
#include<string>
#include<vector>
#include"Animals.h"

int main(void){
	char type;
	std::vector<Animal*> animals;
	while(1){
		std::cin >> type;
		if(type=='0') break;
		std::string name;
		int age;
		std::cin >> name >> age;
		if(type=='z'){
			int numSprites;
			std::cin >> numSprites;
			animals.push_back(new Zebra(name, age, numSprites));
		}
		if(type=='c'){
			std::string favoriteToy;
			std::cin >> favoriteToy;
			animals.push_back(new Cat(name, age, favoriteToy));
		}
	}
	for(const auto& i : animals){
		i->printInfo();
	}
	for(auto& i : animals) delete i;
}
