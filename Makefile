all: pe1 pe2 pe3 pe4 pe5 pe6 pe7 pe8 pe9 pe10 factor.o

pe1: pe1.cpp
	g++ -Wall -g -std=c++11 -o pe1 pe1.cpp

pe2: pe2.cpp
	g++ -Wall -g -std=c++11 -o pe2 pe2.cpp

pe3: pe3.cpp
	g++ -Wall -g -std=c++11 -o pe3 pe3.cpp

pe4: pe4.cpp
	g++ -Wall -g -std=c++11 -o pe4 pe4.cpp

pe5: pe5.cpp
	g++ -Wall -g -std=c++11 -o pe5 pe5.cpp

pe6: pe6.cpp
	g++ -Wall -g -std=c++11 -o pe6 pe6.cpp

pe7: pe7.cpp
	g++ -Wall -g -std=c++11 -o pe7 pe7.cpp

pe8: pe8.cpp
	g++ -Wall -g -std=c++11 -o pe8 pe8.cpp

pe9: pe9.cpp
	g++ -Wall -g -std=c++11 -o pe9 pe9.cpp

pe10: pe10.cpp
	g++ -Wall -g -std=c++11 -o pe10 pe10.cpp

factor.o: factor.cpp
	g++ -Wall -g -std=c++11 -c factor.cpp

clean:
	\rm *.o *~ p1
