#include<stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff){
	*pSum = a+b;
	*pDiff = a-b;
}

int main(void){
	int a,b;
	scanf("%d %d", &a, &b);
	int sum, diff;
	getSumDiff(a,b,&sum,&diff);
	printf("Sum:%d\ndiff:%d\n", sum, diff);
}
