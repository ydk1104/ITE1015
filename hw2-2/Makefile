all : get_sum_diff to_lower_upper

get_sum_diff : get_sum_diff.o
	g++ -o get_sum_diff get_sum_diff.o

to_lower_upper : to_lower_upper.o
	g++ -o to_lower_upper to_lower_upper.o

clean :
	rm *.o
	rm get_sum_diff
	rm to_lower_upper
