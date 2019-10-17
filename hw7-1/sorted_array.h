#ifndef sorted_array_h
#define sorted_array_h
#include<vector>

class SortedArray{
	private:
			std::vector<int> numbers_;
	public:
			SortedArray();
			~SortedArray();
			void AddNumber(int num);
			std::vector<int> GetSortedAscending() const;
			std::vector<int> GetSortedDescending() const;
			int GetMax() const;
			int GetMin() const;
};


#endif
