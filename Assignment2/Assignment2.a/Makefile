all: array_in_binary

array_in_binary: main.o upside_down.o binary_file_creator.o
	g++ main.o upside_down.o -o array
	g++ binary_file_creator.o -o create

main.o: main.cpp
	g++ -c main.cpp

upside_down.o: upside_down.cpp
	g++ -c upside_down.cpp

binary_file_creator.o: binary_file_creator.cpp
	g++ -c binary_file_creator.cpp

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o array create destination.pdf 
