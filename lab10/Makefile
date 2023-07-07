CPP = g++
CFLAGS = -Wall -std=c++11

OBJECTS = agenda.o contato.o main.o

EXES = executeAgenda

all : $(EXES)

$(EXES): $(OBJECTS)
	$(CPP) $(CFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CPP) $(CFLAGS) -c $<

clean:
	rm -vf *.o $(EXES)