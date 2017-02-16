all:
	g++ src/*.cpp -o exec -Iinclude -L. -ltcod -ltcodxx -Wl,-rpath=. -Wall
	./exec
