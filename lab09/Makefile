CPP=g++
CFLAGS=-Wall -std=c++11

OBJECTS=forca.o main.o

EXES=executeForca

all: $(EXES)

$(EXES) : $(OBJECTS)
	$(CPP) $(CFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CPP) $(CFLAGS) -c $<

clean:
	rm -vf $(OBJECTS) 