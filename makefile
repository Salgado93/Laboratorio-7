main: 	main.o soldado.o arquero.o coraza.o asesino.o escuadron.o
	g++ main.o soldado.o arquero.o coraza.o asesino.o main.o -o lab7

main.o:	main.cpp soldado.h arquero.h coraza.h asesino.h escuadron.h
	g++ -c main.cpp

soldado.o:	soldado.cpp soldado.h
	g++ -c soldado.cpp

arquero.o:	arquero.cpp arquero.h soldado.h
	g++ -c arquero.cpp

coraza.o:	coraza.cpp soldado.h coraza.h
	g++ -c coraza.cpp

asesino.o:	asesino.cpp coraza.h soldado.h
	g++ -c asesino.cpp


escuadron.o:	escuadron.cpp escuadron.h soldado.h
	g++ -c escuadron.cpp
