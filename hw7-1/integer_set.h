#ifndef integer_set_h
#define integer_set_h

#include<iostream>
#include<vector>

class IntegerSet{
	private:
		std::vector<int> numbers_;
	public:
		IntegerSet();
		~IntegerSet();

		void AddNumber(int num);
		void DeleteNumber(int num);
		int GetItem(int pos) const;
		friend std::ostream& operator <<(std::ostream& os, IntegerSet x);
};
#endif
