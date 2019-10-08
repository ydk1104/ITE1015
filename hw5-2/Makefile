all : get_sum_diff sort_int 
get_sum_diff : get_sum_diff.o
	g++ -o get_sum_diff get_sum_diff.o

sort_int : sort_int.o sort.o
	g++ -o sort_int sort_int.o sort.o
clean :
	rm *.o	
	rm get_sum_diff
	rm sort_int
