PROG = program
SRC = main.o functions.o function_exersises.o
CC = g++
CFLAGS= -c -Wall

all: $(PROG)

$(PROG): $(SRC)
	$(CC) $(SRC) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o