CC=g++
CFLAGS=-Wall -std=c11

OBJECTS=vertice.o main.o

EXECS=$(LETTER_A)

LETTER_A=executeLetterA

all: $(EXECS)

letterA: $(LETTER_A)

$(LETTER_A) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

$(EXECS) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ 

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -vf $(EXECS) *.o