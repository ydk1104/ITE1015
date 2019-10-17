#include"integer_set.h"
#include<algorithm>
IntegerSet::IntegerSet(){};
IntegerSet::~IntegerSet(){};
void IntegerSet::AddNumber(int num){
	std::vector<int>::iterator it = std::lower_bound(numbers_.begin(), numbers_.end(), num);
	if(it==numbers_.end() || *it != num) numbers_.insert(it, num);
	std::cout << *this; 
}

void IntegerSet::DeleteNumber(int num){
	std::vector<int>::iterator it = std::lower_bound(numbers_.begin(), numbers_.end(), num);
	if(it!=numbers_.end() && *it==num) numbers_.erase(it);
	std::cout << *this;
}

int IntegerSet::GetItem(int pos)const{return numbers_.size()<=pos?-1:numbers_[pos];}

std::ostream& operator <<(std::ostream &os, IntegerSet x){
	for(auto i:x.numbers_) std::cout << i << ' ';
	std::cout << '\n';
}
