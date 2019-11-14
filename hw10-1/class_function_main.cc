#include<iostream>
#include<string>
#include<vector>
#include"class_function.h"

int main(void){
	std::string input;
	std::vector<A*> objects;
	while(input != "0"){
		A* temp = NULL;
		if(input == "B") temp = new B();
		else if(input == "C") temp = new C();
		else if(input == "BB") temp = new BB();
		if(temp != NULL) objects.push_back(temp);
		std::cin >> input;
	}
	for(const auto& i:objects){i->test1(); i->test2();}
	for(auto& i:objects) delete i;
}
