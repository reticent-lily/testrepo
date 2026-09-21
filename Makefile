FLAG = -std=c++20 -Wall

main: main.cpp
	g++ main.cpp -o main ${FLAG}
