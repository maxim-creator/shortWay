#include "Way.h"
#include <cmath>

 

 void Way::setStartFinish() {
	 cout << endl << "enter starting position" << endl;
	 cout << "X:";
	 cin >> startX;
	 cout << endl << "Y:";
	 cin >> startY;
	 arr[startX][startY] = 8;

	 cout << endl << "enter end position" << endl;
	 cout << "X:";
	 cin >> endX;
	 cout << endl << "Y:";
	 cin >> endY;
	 arr[endX][endY] = 9;

	 currentX = startX;
	 currentY = startY;
	 destX = endX;
	 destY = endY;
	 if (!HomeOnRoad(currentX, currentY, destX, destY)) {
		 cout <<"Distanse: " << setDistance(currentX,currentY, destX,destY);
		 system("pause");
	 }
	/* else {
		 cout << "home on straight road" << endl;
	 }*/
 }

 double Way::setDistance(int currentX_, int currentY_,int destX_, int destY_)
 {
	 return sqrt(pow((destX_ - currentX_), 2) + pow((destY_ - currentY_), 2));;
 }
 
#define destX destX_
#define destY destY_
#define currentX currentX_
#define currentY currentY_
 ////направление
 //bool Way::goRight(int currentX, int destX) {
	// if(currentX < destX){
	//	 return true;
	// }
	// else {
	//	 return false;
	// }
 //}

 //bool Way::goDown(int currentY, int destY) {
	// if (currentY < destY) {
	//	 return true;
	// }
	// else {
	//	 return false;
	// }
 //}

 //


 //bool Way::HomeOnRoad(int currentX, int currentY, int destX, int destY) {
	// int deltaX;
	// int deltaY;

	// double over;
	// int stepX;
	// int stepY;
	// 
	// if (goRight(currentX, destX)) {
	//	 deltaX = destX - currentX;
	// }
	// else {
	//	 deltaX = currentX - destX;
	// }

	// if (goDown(currentY, destY)) {
	//	 deltaY = destY - currentY;
	// }

	// else{
	//	 deltaY = currentY - destY;
	// }
	// //размер 1 шага
	// if (deltaX > deltaY) {
	//	 if (deltaY != 0) {
	//		 stepX = deltaX / deltaY;
	//		 stepY = 1;
	//		 over = (deltaX % deltaY) / deltaY;
	//	 }
	//	 else {
	//		 stepX = 0;
	//		 stepY = 1;
	//		 over = 0;
	//	 }
	// }
	// if (deltaY > deltaX) {
	//	 if (deltaX != 0) {
	//		 stepY = deltaY / deltaX;
	//		 stepX = 1;
	//		 over = (deltaY % deltaX) / deltaX;
	//	 }
	//	 else {
	//		 stepX = 1;
	//		 stepY = 0;
	//		 over = 0;
	//	 }
	// }
	// if (deltaX == deltaY) {
	//	 stepX = 1;
	//	 stepY = 1;
	//	 over = 0;
	// }

	// int i = currentX;
	// int j = currentY;
	// double over_ = 0;
	// int plusone = 0;
	// if (goRight(currentX, destX) and goDown(currentY, destY)) {
	//	 while (i != destX or j != destY)
	//	 {
	//		 over_ += over;
	//		 if (over_ >= 1) {
	//			 plusone = 1;
	//			 over_--;
	//		  }
	//		 i += stepX;
	//		 j += stepY;
	//		 if(plusone == 1){
	//			 if (stepX == i) {
	//				 j++;
	//			 }
	//			 else
	//			 {
	//				 i++;
	//			 }
	//			 plusone = 0;
	//		 }
	//		 if (arr[i][j] == 1) {
	//			 return true;
	//		 }
	//	 }
	// }

	// 
	// if (!goRight(currentX, destX) and goDown(currentY, destY)) {
	//	 while (i != destX or j != destY)
	//	 {
	//		 over_ += over;
	//		 if (over_ >= 1) {
	//			 plusone = 1;
	//			 over_--;
	//		  }
	//		 i -= stepX;
	//		 j += stepY;
	//		 if(plusone == 1){
	//			 if (stepX == i) {
	//				 j++;
	//			 }
	//			 else
	//			 {
	//				 i--;
	//			 }
	//			 plusone = 0;
	//		 }
	//		  
	//		 if (arr[i][j] == 1) {
	//			 return true;
	//		 }
	//	 }
	// }


	// if (goRight(currentX, destX) and !goDown(currentY, destY)) {
	//	 while (i != destX or j != destY)
	//	 {
	//		 over_ += over;
	//		 if (over_ >= 1) {
	//			 plusone = 1;
	//			 over_--;
	//		 }
	//		 i += stepX;
	//		 j -= stepY;
	//		 if (plusone == 1) {
	//			 if (stepX == i) {
	//				 j--;
	//			 }
	//			 else
	//			 {
	//				 i++;
	//			 }
	//			 plusone = 0;
	//		 }
	//		 if (arr[i][j] == 1) {
	//			 return true;
	//		 }
	//	 }
	// }

	// if (!goRight(currentX, destX) and !goDown(currentY, destY)) {
	//	 while (i != destX or j != destY)
	//	 {
	//		 over_ += over;
	//		 if (over_ >= 1) {
	//			 plusone = 1;
	//			 over_--;
	//		 }
	//		 i -= stepX;
	//		 j -= stepY;
	//		 if (plusone == 1) {
	//			 if (stepX == i) {
	//				 j--;
	//			 }
	//			 else
	//			 {
	//				 i--;
	//			 }
	//			 plusone = 0;
	//		 }
	//		 if (arr[i][j] == 1) {
	//			 return true;
	//		 }
	//	 }
	// }
	// return false;
 //}


 
int Way::dirX(int currentX, int destX) {
	int directionX = 0;
	if (currentX < destX) {
		directionX = 1;
	}
	if (currentX > destX) {
		directionX = -1;
	}
	if (currentX == destX) {
		directionX = 0;
	}
	return directionX;
 }

int Way::dirY(int currentY, int destY) {
	int directionY = 0;
	if (currentY < destY) {
		directionY = 1;
	}
	if (currentY > destY) {
		directionY = -1;
	}
	if (currentY == destY) {
		directionY = 0;
	}
	return directionY;

}

 



bool Way::HomeOnRoad(int currentX, int currentY, int destX, int destY) {
	 
	int deltaX = abs(currentX - destX);
	int deltaY = abs(currentX - destX);

	int stepX = 0;
	int stepY = 0;
	double over = 0;
	
	if (deltaX > deltaY) {
		stepY = 1;
		if (deltaY != 0) {
			stepX = deltaX / deltaY;
			over = (deltaX % deltaY) / deltaX;
		}
		else {
			stepX = 1;
		}
	}

	if (deltaX < deltaY) {
		stepX = 1;
		if (deltaX != 0) {
			stepY = deltaY / deltaX;
			over = (deltaY % deltaX) / deltaY;
		}
		else {
			stepY = 1;
		}
	}
	
	if (deltaX == deltaY) {
		stepX = 1;
		stepY = 1;
		over = 0;
	}

	int passedX = 0;
	int passedY = 0;
	double over_ = over;


	//право верх
	if (dirX(currentX, destX) == 1 and dirY(currentY, destY) == 1) {
		while (currentX + passedX != destX and currentY + passedY != destY)
		{
			if (deltaX > deltaY) {
				if (over_ >= 1) {
					passedX++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX + passedX][currentY + passedY] == 1) {
					return true;
				}
				if (currentY + passedY == destY and destX - (currentX + passedX) == 0) {
					passedX++;
				}
			}


			if (deltaX < deltaY) {
				if (over_ >= 1) {
					passedY++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX + passedX][currentY + passedY] == 1) {
					return true;
				}
				if (currentX + passedX == destX and destY - (currentY + passedY) == 0) {
					passedY++;
				}
			}

			if (deltaX == deltaY) {
				passedX += stepX;
				passedY += stepY;
				if (arr[currentX + passedX][currentY + passedY] == 1) {
					return true;
				}
			}
		}
		return false;
	}

	//право низ
	if (dirX(currentX, destX) == 1 and dirY(currentY, destY) == -1) {
		while (currentX + passedX != destX and currentY - passedY != destY)
		{
			if (deltaX > deltaY) {
				if (over_ >= 1) {
					passedX++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX + passedX][currentY - passedY] == 1) {
					return true;
				}
				if (currentY - passedY == destY and destX - (currentX + passedX) == 0) {
					passedX++;
				}
			}


			if (deltaX < deltaY) {
				if (over_ >= 1) {
					passedY++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX + passedX][currentY - passedY] == 1) {
					return true;
				}
				if (currentX + passedX == destX and destY - (currentY - passedY) == 0) {
					passedY++;
				}
			}

			if (deltaX == deltaY) {
				passedX += stepX;
				passedY += stepY;
				if (arr[currentX + passedX][currentY - passedY] == 1) {
					return true;
				}
			}
		}
		return false;
	}
	//лево верх
	if (dirX(currentX, destX) == -1 and dirY(currentY, destY) == 1) {
		while (currentX - passedX != destX and currentY + passedY != destY)
		{
			if (deltaX > deltaY) {
				if (over_ >= 1) {
					passedX++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX - passedX][currentY + passedY] == 1) {
					return true;
				}
				if (currentY + passedY == destY and destX - (currentX - passedX) == 0) {
					passedX++;
				}
			}


			if (deltaX < deltaY) {
				if (over_ >= 1) {
					passedY++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX - passedX][currentY + passedY] == 1) {
					return true;
				}
				if (currentX - passedX == destX and destY - (currentY + passedY) == 0) {
					passedY++;
				}
			}

			if (deltaX == deltaY) {
				passedX += stepX;
				passedY += stepY;
				if (arr[currentX - passedX][currentY + passedY] == 1) {
					return true;
				}
			}
		}
		return false;
	}
	//лево низ
	if (dirX(currentX, destX) == -1 and dirY(currentY, destY) == -1) {
		while (currentX - passedX != destX and currentY + passedY != destY)
		{
			if (deltaX > deltaY) {
				if (over_ >= 1) {
					passedX++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX - passedX][currentY - passedY] == 1) {
					return true;
				}
				if (currentY - passedY == destY and destX - (currentX - passedX) == 0) {
					passedX++;
				}
			}


			if (deltaX < deltaY) {
				if (over_ >= 1) {
					passedY++;
					over_--;
				}
				passedX += stepX;
				passedY += stepY;
				over_ += over;
				if (arr[currentX - passedX][currentY - passedY] == 1) {
					return true;
				}
				if (currentX - passedX == destX and destY - (currentY - passedY) == 0) {
					passedY++;
				}
			}

			if (deltaX == deltaY) {
				passedX += stepX;
				passedY += stepY;
				if (arr[currentX - passedX][currentY - passedY] == 1) {
					return true;
				}
			}
		}
		return false;
	}
	 
	//только вверх
	if (dirX(currentX, destX) == 0 and dirY(currentY, destY) == 1) {
		while (currentY + passedY != destY)
		{
			passedY++;
			if (arr[currentX][currentY + passedY] == 1) {
				return true;
			}

		}
		return false;
	}

	//только вниз
	if (dirX(currentX, destX) == 0 and dirY(currentY, destY) == -1) {
		while (currentY - passedY != destY)
		{
			passedY++;
			if (arr[currentX][currentY - passedY] == 1) {
				return true;
			}

		}
		return false;
	}
	//только направо
	if (dirX(currentX, destX) == 1 and dirY(currentY, destY) == 0) {
		while (currentX + passedX != destX)
		{
			passedX++;
			if (arr[currentX + passedX][currentY ] == 1) {
				return true;
			}

		}
		return false;
	}
	//только налево
	if (dirX(currentX, destX) == -1 and dirY(currentY, destY) == 0) {
		while (currentX - passedX != destX)
		{
			passedX++;
			if (arr[currentX - passedX][currentY] == 1) {
				return true;
			}

		}
		return false;
	}

}
 























































































































































































































































































































































































































































































































