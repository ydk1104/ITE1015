all : array_struct_point score_graph print_point
array_struct_point : array_struct_point.o
	g++ -o array_struct_point array_struct_point.o

score_graph : score_graph.o
	g++ -o score_graph score_graph.o

print_point : print_point.o
	g++ -o print_point print_point.o
clean :
	rm array_struct_point
	rm score_graph
	rm print_point
	rm *.o
