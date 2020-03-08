#pragma once
#include "Way.h"
#include <vector>

 
class Dijkstra :public Way
{
	vector <int> nodeX;
	vector <int> nodeY;
	vector <vector <double> > edge;
	vector <double> shortestWay;
	vector <bool> visited;
	int nodeQuantity = 0;
	int currentNode = 0;

public:

		void setGraph();
		void countWay();
	 


};