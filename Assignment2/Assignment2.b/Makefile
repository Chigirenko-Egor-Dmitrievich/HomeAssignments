all: calculate

calculate: polish_calculator.o
	g++ polish_calculator.o -o calculate

polish_calculator.o: polish_calculator.cpp
	g++ -c polish_calculator.cpp

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o calculate
