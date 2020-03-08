 #include <iostream>

#include "Pole.h"
#include "House.h"
#include "Way.h"
#include "Dijkstra.h"


//using namespace std;

 

int main()
{
	Dijkstra one;
	one.setSize();
	one.setHouse();
	one.setStartFinish();
	one.setGraph();
	one.countWay();
	one.printPole();

	return 0;
}

 