#pragma once
class Shuz
{
private:
	int** arrayCards1;
	int** arrayCards2;
	int** arrayCards3;
	int** arrayCards4;
	int x;
	int y;
	int g;
public:
	Shuz(void);
	~Shuz(void);

	void makeAllCards(int** arrayCards);//передовать по ссылке
};

