all: array_in_binary

array_in_binary: main.o binary_file_creator.o
	g++ main.o -o main
	g++ binary_file_creator.o -o create

main.o: main.cpp
	g++ -c main.cpp

binary_file_creator.o: binary_file_creator.cpp
	g++ -c binary_file_creator.cpp

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o main create destination.txt source.txt
