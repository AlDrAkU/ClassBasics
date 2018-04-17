#include<iostream>
#include"Square.h"
// def functions

//void TestSquare(Square * pSquare);
void TestSquare(Square  Square);

int main() {
// definition vars
	Square sq1;
	Square sq2;
	Square * pSq1 = new Square();
	sq1.Move(10, 20);
	sq1.SetSize(3);
	sq1.Print();
	TestSquare(*pSq1);
	delete pSq1;
	TestSquare(sq1);
	sq1.Print();
	system("pause");
}
void TestSquare(Square * pSquare) {

	float xDif{5}, yDif{10};
	pSquare->Move(xDif, yDif);
}
void TestSquare(Square square) {

	float xDif{ 5 }, yDif{ 10 };
	square.Move(xDif, yDif);


}