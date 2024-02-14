asc:app.o asc.o
	gcc app.o asc.o -o asc
app.o:app.c
	gcc -c app.c
asc.o:asc.c
	gcc -c asc.c	
