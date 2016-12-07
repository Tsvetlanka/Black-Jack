#pragma once
class Сards
{
private:
	int** arrayCards1;
	int** arrayCards2;
	int** arrayCards3;
	int** arrayCards4;
public:
	Сards(void);
	~Сards(void);//???? 4 массива или 1 16*9

	void makeAllCards(int** arrayCards);//передовать по ссылке
};

