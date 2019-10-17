#include<iostream>
#include<string>
#include"sorted_array.h"

std::ostream& operator <<(std::ostream& os, std::vector<int> v){
	for(auto i:v) std::cout << i << ' ';
	std::cout << '\n';
	return os;
}

int main(void){
	SortedArray arr;
	std::string input;
	while(input!="quit"){
		if(input[0] >= '0' && input[0] <= '9'){
			arr.AddNumber(stoi(input));
		}
		else if(input[0] == 'a'){
			std::vector<int> v = arr.GetSortedAscending();
			std::cout << v;
		}
		else if(input[0] == 'd'){
				std::vector<int> v = arr.GetSortedDescending();
				std::cout << v;
		}
		else if(input[0] == 'm'){
			int out = -1;
			if(input[1] == 'a'){
				out = arr.GetMax();
			}
			else if(input[1] == 'i'){
				out = arr.GetMin();
			}
			std::cout << out << '\n';
		}
		std::cin >> input;
	}
}
