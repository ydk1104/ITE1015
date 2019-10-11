all : reply_admin 
reply_admin : reply_admin.o reply_admin_main.o
	g++ -o reply_admin reply_admin.o reply_admin_main.o
clean : 
	rm *.o
	rm reply_admin
