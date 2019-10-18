#include"simple_int_set.h"

std::set<int> SetIntersection(const std::set<int>& set0, const std::set<int>& set1){
		std::set<int> temp;
		for(const auto& i:set0) temp.insert(i);
		for(const auto& i:set1) temp.insert(i);
		return temp;
}
std::set<int> SetUnion(const std::set<int>& set0, const std::set<int>& set1){
	std::set<int> temp;
	for(auto i=set0.begin(), j=set1.begin();
		i!=set0.end() && j!=set1.end();){
		if(*i < *j) i++;
		else if(*i > *j) j++;
		else if(*i == *j) temp.insert(*i), i++, j++;
	}
	return temp;
}
std::set<int> SetDifference(const std::set<int>& set0, const std::set<int>& set1){
	std::set<int> temp;
	auto i=set0.begin(), j=set1.begin();
	for(;
		i!=set0.end() && j!=set1.end();){
		if(*i < *j) temp.insert(*i), i++;
		else if(*i == *j) i++, j++;
		else if(*i > *j) j++;
	}
	while(i!=set0.end()) temp.insert(*i), i++;
	return temp;
}
