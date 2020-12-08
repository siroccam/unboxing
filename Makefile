FLAGS = -g -Wall -Werror
SFLAGS = -ansi -pedantic -O0
SRC = unbox.cpp
DEST = ub

all: unboxing

strict: $(SRC)
	g++ $(SRC) $(SFLAGS) $(FLAGS) -o $(DEST)

unboxing: unbox.cpp
	g++ $(FLAGS) $(SRC) -o $(DEST)

clean:
	clear
	rm -f $(DEST)
