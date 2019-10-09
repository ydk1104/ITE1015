#include<iostream>
#include"magic_square.h"

int atoi(char* s){
	int temp = 0;
	for(int i=0; s[i]; i++){
		temp *= 10;
		temp += s[i]-'0';
	}
	return temp;
}

int main(int argc, char** argv){
	int N = atoi(argv[1]);
	if(N<3 || N%2==0) return 0;
	int** matrix = new int*[N];
	for(int i=0; i<N; i++) matrix[i] = new int[N];
	magic_square(matrix, N);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++)
			std::cout << matrix[i][j] << ' ';
		std::cout << '\n';
	}
	for(int i=0; i<N; i++) delete[] matrix[i];
	delete[] matrix;
}
