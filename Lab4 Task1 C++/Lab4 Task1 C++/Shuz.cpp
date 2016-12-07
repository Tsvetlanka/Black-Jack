#include "Shuz.h"


Shuz::Shuz(void)
{
	arrayCards1 = new int* [4];
	arrayCards2 = new int* [4];
	arrayCards3 = new int* [4];
	arrayCards4 = new int* [4];///654664465
}


Shuz::~Shuz(void)
{
}


void Shuz::makeAllCards(int** arrayCards)//передовать по ссылке
{
	for(int i = 0; i < 4; ++i)
	{
		*(arrayCards + i) = new int[4];
	}
	int numPoint = 6;
	for(int i = 0; i < 9; ++i)
	{
		if (i <= 4)
			++numPoint;
		else if (i == 8)
			numPoint = 11;
		*(*(arrayCards + 0) + i) = numPoint;
		*(*(arrayCards + 1) + i) = numPoint;
		*(*(arrayCards + 2) + i) = numPoint;
		*(*(arrayCards + 3) + i) = numPoint;
	}
}