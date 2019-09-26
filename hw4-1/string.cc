#include<iostream>
#include<string>

int main(void){
	std::string a,b;
	std::cin >> a >> b;
	std::cout << a+b << '\n' << a[0] << '\n' << b[b.size()-1] << '\n';
}
