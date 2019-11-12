all : Animals draw_shape 
Animals : Animals.o Animals_main.o
	g++ -o Animals Animals.o Animals_main.o

draw_shape : draw_shape.o draw_shape_main.o
	g++ -o draw_shape draw_shape.o draw_shape_main.o
clean : 
	rm *.o
