main.exe: main.c countspace.o minfinder.o stringcat.o faculty.o
	gcc main.c minfinder.o stringcat.o countspace.o faculty.o -o main.exe
countspace.o: countspace.c
	gcc -c countspace.c
minfinder.o: minfinder.c
	gcc -c minfinder.c
stringcat.o: stringcat.c
	gcc -c stringcat.c
faculty.o: faculty.c
	gcc -c faculty.c
clean:
	del *.o *.exe