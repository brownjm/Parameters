CC = g++
FLAGS = -O3 -Wall -pedantic

all: params

params:
	$(CC) $(FLAGS) -o test example.cc
