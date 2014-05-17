#Enables C++11
PATH := /usr/um/gcc-4.7.0/bin:$(PATH)
LD_LIBRARY_PATH := /usr/um/gcc-4.7.0/lib64
LD_RUN_PATH := /usr/um/gcc-4.7.0/lib64

#Default Flags
FLAGS = -Wall -Wextra -pedantic -std=c++11 -O3

all: LCS.o solution.o
	g++ $(FLAGS) LCS.o solution.o main.cpp -o LCS

LCS.o: LCS.h LCS.cpp
	g++ $(FLAGS) -c LCS.cpp

substring: longestCommonSubstring.cpp
	g++ $(FLAGS) -c longestCommonSubstring.cpp

subsequence: longestCommonSubSequence.cpp
	g++ $(FLAGS) -c longestCommonSubSequence.cpp

clean:
	rm -f LCS.o LCS
