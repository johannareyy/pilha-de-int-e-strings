CXXARGS = -Wall -Wextra -std=c++17
NOMEPROG = exproposto4.bin

compilar: exproposto4.cpp
	g++ exproposto4.cpp -o $(NOMEPROG) $(CXXARGS)

debug: exproposto4.cpp
	g++ exproposto4.cpp -o $(NOMEPROG) $(CXXARGS) -g

apagar:
	rm $(NOMEPROG)

executar: compilar
	./$(NOMEPROG)
