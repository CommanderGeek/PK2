main.exe: ascii.o to_binary.o einmaleins.o to_upper.o main.c
	gcc main.c -o main.exe ascii.o einmaleins.o to_binary.o to_upper.o
ascii.o: ascii.c
	gcc -c ascii.c
einmaleins.o: einmaleins.c
	gcc -c einmaleins.c
to_binary.o: to_binary.c
	gcc -c to_binary.c
to_upper.o: to_upper.c
	gcc -c to_upper.c
clean:
	del *.o *.exe