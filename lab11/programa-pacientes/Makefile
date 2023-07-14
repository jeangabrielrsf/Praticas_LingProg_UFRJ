CPP=g++
LD=g++

CPPFLAGS=-Wall -std=c++11

OBJECTS=arvore.o main.o paciente.o sistema.o

EXES=executeSistema

all: $(EXES)

$(EXES) : $(OBJECTS)
	$(CPP) $(CPPFLAGS) $(OBJECTS) -o $@


.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

clean:
	rm -vf $(EXES) $(OBJECTS)
