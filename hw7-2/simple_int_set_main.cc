#include"simple_int_set.h"
#include<iostream>
#include<string>
#include<functional>

std::ostream& operator <<(std::ostream& os, std::set<int> set){
	std::cout << '{';
	for(auto i:set) std::cout << ' ' << i;
	std::cout << " }\n";
}

int main(void){
	std::string s;
	std::function<std::set<int>(std::set<int>&,std::set<int>&)> func[128] = {0, };
	func['+'] = SetIntersection;
	func['-'] = SetDifference;
	func['*'] = SetUnion;
	while(s[0] != '0'){
//			std::cout << s << '\n';	
		if(s[0] == '{'){
			int check = 0, num = 0, minus = 0, blank = 0;
			char type;
			std::set<int> set[2];
			for(auto& c:s){
//				std::cout << c << ' ' << num << '\n';
				if(check==1){
					if(c==' ') continue;
					type = c;
					check++;
				}
				else if(c==' '){
					if(minus) num *= -1;
					if(blank) set[check/2].insert(num);
//					std::cout << blank << ' ' << c << ' ' << num << '\n';
					blank = 1;
					num = minus = 0;
					continue;
				}
				else if(c=='{') blank = 0;
				else if(c=='}'){
					check++;
					blank = 0;
				}
				else if(c >= '0' && c <= '9'){
					num *= 10;
					num += c-'0';
				}
				else if(c == '-') minus = 1;
			}
			std::cout << func[type](set[0], set[1]);
		}
		std::getline(std::cin, s);
	}
}
