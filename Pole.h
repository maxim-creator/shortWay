#pragma once
class Pole
{
protected:
	int sizeX = 0;
	int sizeY = 0;
	int** arr = new int* [100000];

public:
	Pole();
	~Pole();

	void setSize();
	void printPole();
};

