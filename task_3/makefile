main.exe: upper.o queue.o main.c
	gcc main.c upper.o queue.o -o main.exe 
upper.o: upper.c
	gcc -c upper.c
queue.o: queue.c
	gcc -c queue.c
clean:
	del *.o *.exe