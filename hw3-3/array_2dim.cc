#include<iostream>

int main(void){
	int arr[3][2];
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			std::cin >> arr[i][j];
		}
	}
	char c[3] = " \n";
	int sum[2] = {0, };
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			std::cout << arr[i][j] << c[j];
			sum[j] += arr[i][j];
		}
	}
	for(int i=0; i<2; i++)
		std::cout << i+1 << "번째 열의 숫자의 합: " << sum[i] << std::endl;
}
