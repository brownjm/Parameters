CC = g++
FLAGS = -O3 -Wall -pedantic

all: params

parameters.o : parameters.h parameters.cc
	$(CC) $(FLAGS) -c parameters.cc

params: parameters.o
	$(CC) $(FLAGS) -o test example.cc parameters.o
