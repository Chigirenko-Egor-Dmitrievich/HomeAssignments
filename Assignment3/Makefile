all: runTests

runTests: test.o transformer.o weapon.o autobot.o decepticon.o predatorcon.o 
	g++ test.cpp transformer.cpp weapon.cpp autobot.cpp decepticon.cpp predatorcon.cpp -lgtest -lpthread -o runTests

test.o: test.cpp
	g++ -c test.cpp
	
transformer.o: transformer.cpp
	g++ -c transformer.cpp
	
Weapon.o: weapon.cpp
	g++ -c weapon.cpp
	
Autobot.o: autobot.cpp
	g++ -c autobot.cpp
	
Decepticon.o: decepticon.cpp
	g++ -c decepticon.cpp
	
Predatorcon.o : predatorcon.cpp
	g++ -c predatorcon.cpp

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o runTests
