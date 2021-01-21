all: main.exe

main.exe: main.o
	 g++ -o main.exe main.o

main.o: test/main.cpp
	 g++ -c test/main.cpp
     
clean:
	 rm main.o main.exe