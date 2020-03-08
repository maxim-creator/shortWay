#include "Pole.h"
#include <iostream>
#include <fstream>

#define RSize 10000


using namespace std;

Pole::Pole() {
	for (int i = 0; i < RSize; i++) {
		arr[i] = new int[RSize];
	}
	for (int i = 0; i < RSize; i++) {
		for (int j = 0; j < RSize; j++){
			arr[i][j] = 0;
		}
	}
}



 Pole::~Pole() {

	 for (int i = 0; i < RSize; i++) {
		 delete[] arr[i];
	 }
	 delete[] arr;

}



 void Pole::setSize() {
	 cout << "enter pole length(from 0 to 10000)" << endl;
	 cin >> sizeY;
	 cout << endl << "enter pole width(from 0 to 10000)" << endl;
	 cin >> sizeX;

 }
 void Pole::printPole() {
	// cout << "you can see pole in the <<result.txt>>" << endl;
	 ofstream out;
	 out.open("result.txt");
	 if (out.is_open()) {
		 for (int i = 0; i < sizeX; i++) {
			 for (int j = 0; j < sizeY; j++) {
				 out << arr[i][j];
			 }
			 out << endl;
		 }
		 cout << endl <<"you can see field in <<result.txt>>" << endl;
		 cout << "1-house" << endl;
		 cout << "2-house rings" << endl;
		 cout << "8-start position" << endl;
		 cout << "9-finish position" << endl;
	 }

	 out.close();
 }

