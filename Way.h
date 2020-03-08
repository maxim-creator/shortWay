#pragma once
#include "House.h"
#include <iostream>

using namespace std;
 
class Way :public House
{
public:
	int startX, startY, endX, endY = 0;
 
	int currentX, currentY, destX, destY = 0;
 
	


	
	void setStartFinish();
	double setDistance(int destX_, int destY_, int currentX_, int currentY_);
	bool HomeOnRoad(int currentX_, int currentY_, int destX_, int destY_);
	//bool goDown(int currentX_, int destX_);
	//bool goRight(int currentY_, int destY_);
	int dirX(int currentX_, int destX_);
	int dirY(int currentX_, int destY_);
};

