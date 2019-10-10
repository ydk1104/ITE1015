#include<iostream>
#include"simple_account.h"

int main(void){
	char type = 0;
	accountManager x;
	while(type != 'Q'){
		x.menu(type);
		std::cout << "\nJob?\n";
		std::cin >> type;
	}
}
