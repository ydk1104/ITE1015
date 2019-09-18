#include<iostream>

int main(void){
	int arr[5];
	for(int i=0; i<5; i++) std::cin >> arr[i];
	int min=*arr, max=*arr, sum;
	for(int i=0; i<5; i++){
		min = min > arr[i] ? arr[i] : min;
		max = max < arr[i] ? arr[i] : max;
		sum += arr[i];
	}
	std::cout << "min: " << min << "\n"
		  << "max: " << max << "\n"
		  << "sum: " << sum << "\n";
}
