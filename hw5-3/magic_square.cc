#include"magic_square.h"

void fill(int** arr, int x, int y, int N, int num){
	if(x>=N) x-=N;
	if(y>=N) y-=N;
	if(x<0) x+=N;
	if(y<0) y+=N;
	arr[x][y] = num;
}

void magic_square(int** arr, int N){
	int x_start = -N/2, y_start = N/2;
	for(int i=0; i<N; i++){
		int x = x_start, y = y_start;
		for(int j=1; j<=N; j++){
			fill(arr, x, y, N, i*N+j);
			x++; y--;
		}
		x_start++, y_start++;
	}
	if(check(arr, N)) arr[0][0]=-1;
}

int check(int** arr, int N){
	int cnt = N*N;
       	long long sum = (cnt)*(cnt+1)/2/N;
	for(int i=0; i<N; i++){
		long long sum1=0, sum2=0;
		for(int j=0; j<N; j++){
			sum1 += arr[i][j];
			sum2 += arr[j][i];
		}
		if(sum1 != sum || sum2 != sum) return 1;
	}
	long long sum1=0, sum2=0;
	for(int i=0; i<N; i++){
		sum1 += arr[i][i];
		sum2 += arr[N-i-1][i];
	}
	if(sum1 != sum || sum2 != sum) return 1;
	return 0;
}
