all : dynamic_array function_overloading string 
dynamic_array : dynamic_array.o
	g++ -o dynamic_array dynamic_array.o

function_overloading : function_overloading.o
	g++ -o function_overloading function_overloading.o

string : string.o
	g++ -o string string.o
clean : 
	rm dynamic_array
	rm function_overloading
	rm string
	rm *.o