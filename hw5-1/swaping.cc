#include<iostream>
#include<string>

void swapInt(int& n1, int& n2){
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swapString(std::string& s1, std::string& s2){
	std::string temp = s1;
	s1 = s2;
	s2 = temp;
}

void print(int& n1, int& n2, std::string& s1, std::string& s2){
	std::cout << "n1: " << n1 << ", n2: " << n2 << ", "
		  << "s1: " << s1 << ", s2: " << s2 << '\n';
}

int main(void){
	int n1,n2;
	std::string s1,s2;
	std::cin >> n1 >> n2 >> s1 >> s2;
	print(n1, n2, s1, s2);
	swapInt(n1,n2); swapString(s1,s2);
	print(n1, n2, s1, s2);
}
