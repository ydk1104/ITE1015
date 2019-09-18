#include<stdio.h>

void square(double* ptr){
	*ptr *= *ptr;
}

int main(void){
	double dvar;
	scanf("%lf", &dvar);
	square(&dvar);
	printf("%f\n", dvar);
}
