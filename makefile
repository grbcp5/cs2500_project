default: build

run:
	./bin/a.out

build: src/main/main.cpp
	g++ src/main/main.cpp -I src/sorting/ -o bin/a.out

src/main/main.cpp: src/sorting/mergeSort/mergeSorter.h

src/sorting/mergeSort/mergeSorter.h: src/sorting/mergeSort/mergeSorter.hpp

clean:
	rm -r bin/*
