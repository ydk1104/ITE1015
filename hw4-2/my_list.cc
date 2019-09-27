#include <iostream>
#include <fstream>
#include <string>
#include <string.h> // strtok

using namespace std;

string* split(const string& str, const string& delim) {
	string* string_list = new string[10];
	int idx = 0;
	char * token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
	while (token != NULL) {
	string_list[idx] = token;
	token = strtok(NULL, delim.c_str());
	++idx;
	}
	while(idx <= 9){
		string_list[idx] = "";
		idx++;
	}
	return string_list;
}

struct Item {
	//implement this structure
	std::string name, age, id;
	std::string* subjects = NULL;
	Item* next;
	Item(){
		name = "", age = "", id = "", subjects = NULL;
	}
	~Item(){
		if(next != NULL) delete next;
		if(subjects != NULL) delete[] subjects;
	}
};

struct Item* create_item() {
	// 하나의 struct Item 형 변수를 동적할당한 후 이에 대한 pointer 를 리턴한다.
	//implement this function
	Item* temp = new Item;
	return temp;
}

void insert_item(struct Item *prev_item, struct Item *item) {
	// linked_list 에 포함되어 있는 prev_item 바로 뒤에 새로운 item 을 추가한다.
	//implement this function
	item->next = prev_item->next;
	prev_item->next = item;
}

ostream& operator <<(ostream& out, string* s){
	for(int i=0; i<=9 && s[i]!=""; i++){
		std::cout << s[i];
		if(i<9 && s[i+1] != "") std:cout << " & ";
	}
	return out;
}

void print(Item* x){
	if(x->next != NULL) print(x->next);
	if(x->id.substr(0,4) == "2013")
		std::cout << x->name << '(' << x->id << ") : "
			  << x->subjects << '\n';
}

int main(void){
	ifstream fin;
	fin.open("input.txt");
	//implement this function
	std::string x;
	std::string delim[2] = {":", ","};
	Item *head = create_item();
	head->next = NULL;
	while(fin >> x){
		std::string *s = split(x, delim[0]);
		Item *temp = create_item();
		temp->name = s[0];
		temp->age = s[1];
		temp->id = s[2];
		temp->subjects = split(s[3], delim[1]);
		insert_item(head, temp);
		delete[] s;
	}
	print(head);
	delete head;
	fin.close();
	return 0;
}
