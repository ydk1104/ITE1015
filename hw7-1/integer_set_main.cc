#include<iostream>
#include"integer_set.h"

int main(void){
	IntegerSet set;
	std::string type = "x";
	int num;
	while(type != "quit"){
		if(type[0] == 'a'){
			std::cin >> num;
			set.AddNumber(num);
		}
		else if(type[0] == 'd'){
			std::cin >> num;
			set.DeleteNumber(num);
		}
		else if(type[0] == 'g'){
			std::cin >> num;
			std::cout << set.GetItem(num) << '\n';
		}
		std::cin >> type;
	}
}
