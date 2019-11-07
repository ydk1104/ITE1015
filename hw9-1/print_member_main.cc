#include<iostream>
#include<vector>
#include"print_member.h"

int main(void){
	int a; double b; std::string s;
	std::cin >> a >> b >> s;
	std::vector<A*> v = {new A(a),new B(b),new C(s)};
	for(auto &i : v) i->print();
	for(auto &i : v) delete i;
}
