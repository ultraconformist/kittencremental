// Kittencremental main header
#ifndef MAIN_H_ 
#define MAIN_H_ 

	void catBox(); void canBox(); void tunaBox(); void upgradeBox();
	void updateKittens(); void updateBoxes(); void boxIncrementer();
	void charGetter(); void FlushStdin(void); void Initialize();

	short maxX, maxY;	
	int i, foodCans, tunaPools, tick;
	float kittens, kibble;
	int perSecond, meowValue, meowUpgradeCost;
	int ch;
	short meowSwitch;
	static const int MILSEC = 10000;
	int canValue, tunaValue;
	char kittenString[20], canString[20], 
		 canPrice[20], tunaString[20], 
		 tunaPrice[20], rateString[20],
		 valueString[50], costPrice[50],
		 kibbleString[20], tunaValueString[20],
		 foodCanValueString[20];
	bool terminate;
	int width, height, rows, cols;

	WINDOW * mainWin, * catDisp, * canDisp, * tunaDisp, * upgradeDisp;
	

	
#endif
