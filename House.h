#pragma once
#include "Pole.h"
class House : public Pole
{
protected:
	int ring1X, ring2X, ring3X, ring4X, ring1Y, ring2Y, ring3Y, ring4Y = 0;
	int rightX, leftX, lowerY, upperY = 0;
	bool rightContact, leftContact, upperContact, lowerContact = false;
private:
	int houses = 0;
public:
	void setHouse();

	 
};

