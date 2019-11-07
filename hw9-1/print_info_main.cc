#include<iostream>
#include<vector>
#include"print_info.h"

int main(void){
	std::vector<A*> v = {new A, new B, new C};
	for(auto i:v) std::cout << printObjectTypeInfo1(i) << '\n'
							<< printObjectTypeInfo2(*i) << '\n';
	for(auto i:v) delete i;
	return 0;
}
