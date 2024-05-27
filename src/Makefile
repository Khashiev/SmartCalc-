CXX=g++
CXXFLAGS=-std=c++17 -Wall -Werror -Wextra

all: install

install: build
	mv build/SmartCalc .

build:
	mkdir build && cd build && cmake .. && make

tests: clean
	$(CXX) $(CXXFLAGS) -c Model/model.cc 
	$(CXX) $(CXXFLAGS) -c tests.cc -lgtest
	$(CXX) $(CXXFLAGS) -o tests model.o tests.o -lgtest
	./tests

clean:
	rm -rf build ./*.o ./*.a ./a.out ./*.gcno ./*.gcda ./gcov_report *.info ./*.info tests

uninstall:
	rm -rf build*
	rm SmartCalc SmartCalc.tar

dist:
	tar -cf SmartCalc.tar SmartCalc

dvi:
	open dvi.md
