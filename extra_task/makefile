main.exe: stack.o emptyStack.o main.cpp 
	g++ main.cpp stack.o emptyStack.o -o main.exe
stack.o: emptyStack.o stack.cpp
	g++ -c stack.cpp emptyStack.o
emptyStack.o: emptyStack.cpp
	g++ -c emptyStack.cpp
clean:
	del *.o *.exe