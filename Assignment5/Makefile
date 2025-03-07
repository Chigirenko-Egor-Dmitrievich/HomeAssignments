CXX = g++
CXXFLAGS = -g -Wall -Werror -Wpedantic 
TARGET = runTests
SOURCES = Autobot.cpp Decepticon.cpp Weapon.cpp Transformer.cpp Tests.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lgtest -lgtest_main -lpthread

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

format:
	astyle -A1 -s4 *.cpp *.hpp

clean:
	rm -f $(OBJECTS)

cleanall:
	rm -f $(OBJECTS) $(TARGET)
