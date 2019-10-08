#include<iostream>
#include"sort.h"

int main(void){
	int N;
	std::cin >> N;
	int* arr = new int[N];
	for(int i=0; i<N; i++) std::cin >> arr[i];
	sort(arr, arr+N);
	for(int i=0; i<N; i++) std::cout << arr[i] << ' ';
	std::cout << '\n';
}
