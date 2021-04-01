XYZ.exe:main.o biggest3.o factorial.o revrs.o
	gcc -o XYZ.exe main.o biggest3.o factorial.o revrs.o
main.o:main.c
	gcc -c main.c
biggest3.o:biggest3.c
	gcc -c biggest3.c
factorial.o:factorial.c
	gcc -c factorial.c
revrs.o:revrs.c
	gcc -c revrs.c

