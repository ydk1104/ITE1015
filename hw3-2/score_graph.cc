#include<iostream>

typedef struct{
	char name[7];
	int score;
}Person;

void printScoreStars(Person *persons, int len){
	for(int i=0; i<len; i++){
		std::cout << persons[i].name << " ";
		for(int j=5; j<=persons[i].score; j+=5){
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}

int main(void){
	Person students[3];
	for(int i=0; i<3; i++){
		std::cin >> students[i].name >> students[i].score;
	}
	printScoreStars(students, 3);
}
