#include<iostream>

void rotateLeft(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void rotateRight(int *a, int *b, int *c){
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}

int main(void){
	int a=10,b=20,c=30, t;
	void(*func[2])(int *,int *,int *) = {rotateLeft, rotateRight};
	while(1){
		std::cout << a << ":" << b << ":" << c << "\n";
		std::cin >> t;
		switch(t){
			case 1 :
				func[t-1](&a, &b, &c);
				break;
			case 2 :
				func[t-1](&a, &b, &c);
				break;
			default :
				return 0;
		}
	}
}
