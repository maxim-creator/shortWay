#include "Dijkstra.h"

void Dijkstra::setGraph()
{
	//вершины
	nodeX.push_back(startX);
	cout << "lalalala" << endl;
	nodeY.push_back(startY);
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeY; j++) {
			if (startX != i and startY != j) {
				if (arr[i][j] == 2) {
					nodeX.push_back(i);
					nodeY.push_back(j);
					nodeQuantity++;
				}
			}
		}
	}
	nodeX.push_back(endX);
	nodeY.push_back(endY);
	//ребра
	vector <double> line;
	for (int i = 0; i < nodeX.size(); i++) {
		for (int j = 0; j < nodeX.size(); j++) {
			if (i == j) {
				line.push_back(0);
			}
			else {
				if (HomeOnRoad(nodeX[i], nodeY[i], nodeX[j], nodeY[j])) {
					line.push_back(0);
				}
				else {
					line.push_back(setDistance(nodeX[i], nodeY[i], nodeX[j], nodeY[j]));
				}
			}
		}

		edge.push_back(line);
		line.clear();
	}

	//минимальный путь
	shortestWay.push_back(0);
	for (int i = 1; i < nodeX.size(); i++) {
		shortestWay.push_back(9999999);
   }
	//посещенные вершины
	for (int i = 0; i < nodeX.size(); i++) {
		visited.push_back(false);
	}
}



void Dijkstra::countWay()
{
	for (int j = 0; j < nodeX.size(); j++) {
		//минимальный путь до соседа
		for (int i = 0; i < nodeX.size(); i++) {
			if (edge[currentNode][i] != 0) {
				if (!visited[i]) {
					if (i != j) {
						if (shortestWay[i] > shortestWay[currentNode] + edge[currentNode][i])
							shortestWay[i] = shortestWay[currentNode] + edge[currentNode][i];
					}
				}
			}
		}

		visited[currentNode] = true;
		//переключение метки к ближайшему соседу
		double min = 99999;
		int minPos = 0;
		for (int i = 0; i < nodeX.size(); i++) {
			if (edge[currentNode][i] != 0) {
				if (!visited[i]) {
					if (min > shortestWay[i]) {
						min = shortestWay[i];
						minPos = i;
					}
				}
			}
		}
		 
		currentNode = minPos;
	}
	 
	int w = nodeX.size() - 1;
	cout << "distanse: " << shortestWay[w];

}


 
