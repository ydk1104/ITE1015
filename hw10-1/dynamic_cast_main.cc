#include<iostream>
#include<string>
#include<vector>
#include"dynamic_cast.h"

int main(void){
	std::string input;
	std::vector<B*> objects;
	while(input != "0"){
		B* temp = NULL;
		if(input == "B") temp = new B;
		else if(input == "C") temp = new C;
		else if(input == "D") temp = new D;
		if(temp != NULL) objects.push_back(temp);
		std::cin >> input;
	}
	for(const auto& i:objects){
		C* C_ptr = dynamic_cast<C*>(i);
		if(C_ptr != NULL) C_ptr->test_C();
		D* D_ptr = dynamic_cast<D*>(i);
		if(D_ptr != NULL) D_ptr->test_D();
	}
	for(auto& i:objects) delete i;
}
