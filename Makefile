main: main.o Animal.o Mammal.o Reptile.o Bird.o Elephant.o Skunk.o Python.o Crocodilia.o Eagle.o
	g++ -pedantic -o main main.o Animal.o Mammal.o Reptile.o Bird.o Elephant.o Skunk.o Python.o Crocodilia.o Eagle.o

main.o: main.cpp Animal.o Elephant.o Skunk.o Mammal.o Crocodilia.o Python.o Reptile.o
	g++ -Wall -pedantic -c main.cpp

Elephant.o: Elephant.cpp Elephant.h Mammal.h Animal.h
	g++ -Wall -pedantic -c Elephant.cpp

Skunk.o: Skunk.cpp Skunk.h Mammal.h Animal.h
	g++ -Wall -pedantic -c Skunk.cpp

Mammal.o: Mammal.cpp Mammal.h Animal.h
	g++ -Wall -pedantic -c Mammal.cpp

Crocodilia.o: Crocodilia.cpp Crocodilia.h Reptile.h Animal.h
	g++ -Wall -pedantic -c Crocodilia.cpp

Python.o: Python.cpp Python.h Reptile.h Animal.h
	g++ -Wall -pedantic -c Python.cpp

Reptile.o: Reptile.cpp Reptile.h Animal.h
	g++ -Wall -pedantic -c Reptile.cpp

Bird.o: Bird.cpp Bird.h Animal.h
	g++ -Wall -pedantic -c Bird.cpp

Eagle.o: Eagle.cpp Eagle.h Bird.h Animal.h
	g++ -Wall -pedantic -c Eagle.cpp


