CPP=g++
LD=g++

CPPFLAGS=-Wall -std=c++11

OBJECTS=catalogo.o main.o

EXES=executeCatalogo

all: $(EXES)

$(EXES) : $(OBJECTS)
	$(CPP) $(CPPFLAGS) $(OBJECTS) -o $@


.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

clean:
	rm -vf $(EXES) $(OBJECTS)
