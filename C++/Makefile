# Name: Zheng Hao Tan
# Email: tanzhao@umich.edu
# Date: May 8, 2014

# Makefile for the multithreaded programs written in C++.

#Enables C++11
PATH := /usr/um/gcc-4.7.0/bin:$(PATH)
LD_LIBRARY_PATH := /usr/um/gcc-4.7.0/lib64
LD_RUN_PATH := /usr/um/gcc-4.7.0/lib64

#Default Flags
FLAGS = -Wall -Wextra -pedantic -Wvla -std=c++11

# make release - will compile "all" with $(FLAGS) and the O3 flag
release: FLAGS += -O3
release: all

# make debug - will compile "all" with $(FLAGS) and the g flag
debug: FLAGS += -g
debug: all

gProf: FLAGS += -pg
gProf: all

all: main.o
	g++ $(FLAGS) main.o -o multithread

main.o:	backgroundTask.h threadGuard.h main.cpp
	g++ $(FLAGS) -c main.cpp

powFunction: powFunction.o
	g++ $(FLAGS) powFunction.o -o powFunction

powFunction.o: powFunction.cpp
	g++ $(FLAGS) -c powFunction.cpp

oneEditApart: oneEditApart.o
	g++ $(FLAGS) oneEditApart.o -o oneEditApart

oneEditApart.o: oneEditApart.cpp
	g++ $(FLAGS) -c oneEditApart.cpp

longestRepeatingCharacter: longestRepeatingCharacter.o
	g++ $(FLAGS) longestRepeatingCharacter.o -o longestRepeatingCharacter

longestRepeatingCharacter.o: longestRepeatingCharacter.cpp
	g++ $(FLAGS) -c longestRepeatingCharacter.cpp

surroundedByX: surroundedByX.o
	g++ $(FLAGS) surroundedByX.o -o surroundedByX

surroundedByX.o: surroundedByX.cpp
	g++ $(FLAGS) -c surroundedByX.cpp

findDuplicateParenthesis: findDuplicateParenthesis.o
	g++ $(FLAGS) findDuplicateParenthesis.o -o findDuplicateParenthesis

findDuplicateParenthesis.o: findDuplicateParenthesis.cpp
	g++ $(FLAGS) -c findDuplicateParenthesis.cpp

# make clean - remove .o files and the executable file.
# You can modify it to remove whatever.
clean:
	rm -f *.o powFunction oneEditApart longestRepeatingCharacter
