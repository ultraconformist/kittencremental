// Kittencremental main header
#ifndef MAIN_H_ 
#define MAIN_H_ 

	void catBox();
	void incBox();
	void updateKittens();
	void updateBoxes();
	void boxIncrementer();
	void *charGetter(void *char_void_ptr);

	int maxX, maxY;	
	int i, foodCans, kittens, tick;
	long canValue;
	char buttonClick;
	char kittenString[10];	
	char canString[50];
	char canPrice[50];
	int width, height, rows, cols, x, y;

	WINDOW * mainWin, * catDisp, * incDisp;
	
#endif
