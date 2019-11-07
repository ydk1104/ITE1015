#include<vector>
#include"classes.h"

int main(void){
	std::vector<A*> v;
	v.push_back(new A);
	v.push_back(new B);
	v.push_back(new C);
	for(auto i:v) i->test();
	for(auto i:v) delete i;
}
