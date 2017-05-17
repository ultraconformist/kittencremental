// Kittencremental main header
#ifndef MAIN_H_ 
#define MAIN_H_ 

	void catBox(); void canBox(); void tunaBox(); void upgradeBox();
	void updateKittens(); void updateBoxes(); void boxIncrementer();
	void charGetter(); void FlushStdin(void); void Initialize();

	int maxX, maxY;	
	int i, foodCans, kittens, tunaPools, tick;
	int perSecond, meowValue, meowUpgradeCost;
	int ch;
	short meowSwitch;
	static const int MILSEC = 10000;
	int canValue, tunaValue;
	char kittenString[10], canString[50], 
		 canPrice[50], tunaString[50], 
		 tunaPrice[50], rateString[50],
		 valueString[50], costPrice[50];
	bool terminate;
	int width, height, rows, cols;

	WINDOW * mainWin, * catDisp, * canDisp, * tunaDisp, * upgradeDisp;
	

	
#endif
