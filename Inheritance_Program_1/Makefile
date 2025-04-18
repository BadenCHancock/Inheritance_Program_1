CXX = g++
CXXFLAGS = -Wall -std=c++17

# Target executable
program: main.o Employee.o ProductionWorker.o
	$(CXX) $(CXXFLAGS) -o program main.o Employee.o ProductionWorker.o

# Object rules
main.o: main.cpp Employee.h ProductionWorker.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Employee.o: Employee.cpp Employee.h
	$(CXX) $(CXXFLAGS) -c Employee.cpp -o Employee.o

ProductionWorker.o: ProductionWorker.cpp ProductionWorker.h Employee.h
	$(CXX) $(CXXFLAGS) -c ProductionWorker.cpp -o ProductionWorker.o

# Clean rule for Windows
clean:
	@if exist program.exe del program.exe
	@if exist *.o del *.o