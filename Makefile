all: graph

graph: main.cpp
	g++ main.cpp -o graph

clean:
	rm -rf *.o *~ graph