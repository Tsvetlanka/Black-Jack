#pragma once
class Shuz
{
private:
	int** arrayCards1;
	int** arrayCards2;
	int** arrayCards3;
	int** arrayCards4;
public:
	Shuz(void);
	~Shuz(void);

	void makeAllCards(int** arrayCards);//передовать по ссылке
};

