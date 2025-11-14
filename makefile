revfebb.exe: main.o rev.o fibb.o
	gcc -o revfebb.exe main.o rev.o fibb.o

main.o: main.c
	gcc -c main.c
rev.o: rev.c
	gcc -c rev.c
fibb.o: fibb.c
	gcc -c fibb.c
clean:
	rm -f *.o ABC.exe
