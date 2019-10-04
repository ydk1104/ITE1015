#include<iostream>
#include<string>
#include<string.h>

int main(int argc, char** argv){
	std::string s;
	int sum = 0;
	for(int i=1; i<argc; i++){
		if(atoi(argv[i])) sum += atoi(argv[i]);
		else s += argv[i];
	}
	std::cout << s << '\n' << sum << '\n';
}
