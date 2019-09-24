all : array_2dim cal_complex touch_points
array_2dim : array_2dim.o
	g++ -o array_2dim array_2dim.o

cal_complex : cal_complex.o
	g++ -o cal_complex cal_complex.o

touch_points : touch_points.o
	g++ -o touch_points touch_points.o
clean :
	rm array_2dim
	rm cal_complex
	rm touch_points
	rm *.o
