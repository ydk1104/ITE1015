#include"sort.h"

void swap(int& x, int& y){
	x^=y; y^=x; x^=y;
}

bool greater(int& x, int& y){
	return x>y;
}

void sort(int* begin, int* end, bool(*cmp)(int&, int&)){
	for(int* i=begin; i<end; i++)
		for(int* j=begin+1; j<end; j++)
			if(cmp(*(j-1), *j)) swap(*(j-1), *j);
}
