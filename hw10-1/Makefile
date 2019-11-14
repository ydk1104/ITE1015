all : class_function cast_quiz dynamic_cast shapes 
class_function : class_function.o class_function_main.o
	g++ -o class_function class_function.o class_function_main.o

cast_quiz : cast_quiz.o
	g++ -o cast_quiz cast_quiz.o

dynamic_cast : dynamic_cast.o dynamic_cast_main.o
	g++ -o dynamic_cast dynamic_cast.o dynamic_cast_main.o

shapes : shapes.o shapes_main.o
	g++ -o shapes shapes.o shapes_main.o
clean : 
	rm *.o
