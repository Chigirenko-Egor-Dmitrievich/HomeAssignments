all: runTests

runTests: tests.o transformer.o weapon.o autobot.o decepticon.o predacon.o 
	g++ tests.cpp transformer.cpp weapon.cpp autobot.cpp decepticon.cpp predacon.cpp -lgtest -lpthread -o runTests

tests.o: tests.cpp
	g++ -c tests.cpp
	
transformer.o: transformer.cpp
	g++ -c transformer.cpp
	
Weapon.o: weapon.cpp
	g++ -c weapon.cpp
	
Autobot.o: autobot.cpp
	g++ -c autobot.cpp
	
Decepticon.o: decepticon.cpp
	g++ -c decepticon.cpp
	
Predacon.o : predacon.cpp
	g++ -c predacon.cpp

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o runTests
