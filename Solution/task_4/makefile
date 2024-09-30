main.exe: dictionary.o main.c
	gcc main.c dictionary.o -o main.exe 
dictionary.o: dictionary.c
	gcc -c dictionary.c
clean:
	del *.o *.exe