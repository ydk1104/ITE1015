#include<iostream>

int main(void){
	int N;
	std::cin >> N;
	int* arr = new int[N];
	for(int i=0; i<N; i++) arr[i] = i;
	for(int i=0; i<N; i++) std::cout << arr[i] << ' ';
	std::cout << '\n';
	delete[] arr;
}
