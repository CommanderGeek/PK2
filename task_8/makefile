main.exe: Audio.o Bild.o Medium.o main.cpp 
	g++ main.cpp Medium.o Audio.o Bild.o -o main.exe
Medium.o: Medium.cpp
	g++ -c Medium.cpp 
Audio.o: Audio.cpp
	g++ -c Audio.cpp
Bild.o: Bild.cpp
	g++ -c Bild.cpp
clean:
	del *.o *.exe