CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: $(CXX) $(CXXFLAGS) TicTacToe.cpp -o main

clean: rm TicTacToe.o main