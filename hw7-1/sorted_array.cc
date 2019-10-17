#include"sorted_array.h"
#include<algorithm>
#include<functional>

SortedArray::SortedArray(){numbers_.clear();}
SortedArray::~SortedArray(){};
void SortedArray::AddNumber(int num){
	numbers_.insert(std::lower_bound(numbers_.begin(),numbers_.end(),num),num);
}
std::vector<int> SortedArray::GetSortedAscending()const{
	return numbers_;
}
std::vector<int> SortedArray::GetSortedDescending()const{
	std::vector<int> v = numbers_;
//	std::sort(v.begin(), v.end(), std::greater<int>());
	std::reverse(v.begin(), v.end());
	return v;
}
int SortedArray::GetMax()const{return *std::max_element(numbers_.begin(), numbers_.end());}
int SortedArray::GetMin()const{return *std::min_element(numbers_.begin(), numbers_.end());}
