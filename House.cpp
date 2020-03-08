#include "House.h"
#include <iostream>
using namespace std;

#define x1 ring1X
#define x2 ring2X
#define x3 ring3X
#define x4 ring4X
#define y1 ring1Y
#define y2 ring2Y
#define y3 ring3Y
#define y4 ring4Y




void House::setHouse() {
	//ввод координат
	cout << "enter a house quantity" << endl;
	int quantity;
	cin >> quantity;
	for (int i = 0; i < quantity; i++) {
		cout << "enter 1 ring coordinates:" << endl;
		cout << "x: ";
		cin >> ring1X;
		cout << endl << "y: ";
		cin >> ring1Y;

		cout << endl << "enter 2 ring coordinates:" << endl;
		cout << "x: ";
		cin >> ring2X;
		cout << endl << "y: ";
		cin >> ring2Y;

		cout << endl << "enter 3 ring coordinates:" << endl;
		cout << "x: ";
		cin >> ring3X;
		cout << endl << "y: ";
		cin >> ring3Y;

		//просчет углов
		int k = 0;

		int q1 = (x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1);

		int q2 = (x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2);

		int q3 = (x1 - x3) * (x2 - x3) + (y1 - y3) * (y2 - y3);
		if (q1 == 0) {
			x4 = x3 + x2 - x1;
			y4 = y3 + y2 - y1;
			k++;
		}
		else {
			if (q2 == 0) {
				x4 = x3 + x1 - x2;
				y4 = y3 + y1 - y2;
				k++;
			}
			else {
				if (q3 == 0) {
					x4 = x2 + x1 - x3;
					y4 = y2 + y1 - y3;
					k++;
				}
			}
		}

		//проверка формы дома
		if (k == 0) {
			cout << "House is not rectangular!" << endl;
			quantity++;
		}
		else {
			/*arr[ring1X][ring1Y] = 1;
			arr[ring2X][ring2Y] = 1;
			arr[ring3X][ring3Y] = 1;
			arr[ring4X][ring4Y] = 1;*/

			//просчет крайних значений x и y
			if (x1 > x2 or x1 > x3) {
				rightX = x1;
				if (x2 < x1) {
					leftX = x2;
				}
				if (x3 < x1) {
					leftX = x3;
				}
			}
			else {
				leftX = x1;
				if (x2 > x1) {
					rightX = x2;
				}
				if (x3 > x1) {
					rightX = x3;
				}
			}

			if (y1 > y2 or y1 > y3) {
				upperY = y1;
				if (y2 != y1) {
					lowerY = y2;
				}
				if (y3 != y1) {
					lowerY = y3;
				}
			}
			else {
				lowerY = y1;
				if (y2 != y1) {
					upperY = y2;
				}
				if (y3 != y1) {
					upperY = y3;
				}
			}
			houses++;
			if (houses > 1) {
				//если дома стоят вплотную появляется проход
				for (int i = leftX; i <= rightX; i++) {
					if (arr[i][upperY] == 0) {
						if (arr[i][upperY + 1] == 1) {
							upperContact = true;
						}
					}
					if (arr[i][lowerY] == 0) {
						if (arr[i][lowerY - 1] == 1) {
							lowerContact = true;
						}
					}
				}

				for (int i = lowerY; i <= upperY; i++) {
					if (arr[leftX][i] == 0) {
						if (arr[leftX - 1][i] == 1) {
							leftContact = true;
						}
					}
					if (arr[rightX][i] == 0) {
						if (arr[rightX + 1][i] == 1) {
							rightContact = true;
						}
					}

				}


				if (upperContact) {
					upperY--;
					lowerY--;
				}

				if (lowerContact) {
					upperY++;
					lowerY++;
				}

				if (rightContact) {
					leftX--;
					rightX--;
				}

				if (leftContact) {
					leftX++;
					rightX++;
				}
			}

			//домик красится в еденицы
			for (int i = leftX; i <= rightX; i++) {
				for (int j = lowerY; j <= upperY; j++) {
					arr[i][j] = 1;
				}
			}
			//углы дома красятся в 2

			if (arr[leftX - 1][upperY + 1] != 1) {
				arr[leftX - 1][upperY + 1] = 2;
			}

			if (arr[leftX - 1][lowerY - 1] != 1) {
				arr[leftX - 1][lowerY - 1] = 2;
			}

			if (arr[rightX + 1][upperY + 1] != 1) {
				arr[rightX + 1][upperY + 1] = 2;
			}

			if (arr[rightX + 1][lowerY - 1] != 1) {
				arr[rightX + 1][lowerY - 1] = 2;
			}

			//cout << leftX << " " << rightX << " " << upperY << " " << lowerY << endl;

			 

			 


		}
	}
}


