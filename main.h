// Kittencremental main header
#ifndef MAIN_H_ 
#define MAIN_H_ 

	void catBox();
	void canBox();
	void tunaBox();
	void updateKittens();
	void updateBoxes();
	void boxIncrementer();
	void charGetter();

	int maxX, maxY;	
	int i, foodCans, kittens, tunaPools, tick;
	static const int MILSEC = 100000;
	long canValue, tunaValue;
	char buttonClick;
	char kittenString[10], canString[50], 
		 canPrice[50], tunaString[50], 
		 tunaPrice[50];
	bool terminate;
	int width, height, rows, cols, x, y;

	WINDOW * mainWin, * catDisp, * canDisp, * tunaDisp;
	
#endif
