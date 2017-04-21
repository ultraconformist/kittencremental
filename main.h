// Kittencremental main header
#ifndef main_h
#define main_h

	void catBox();
	void incBox();
	void updateKittens();

	int maxX, maxY;	
	int kittens = 0;
	int foodCans = 0;
	int i;
	char buttonClick;
	char kittenString[10];	
	char canString[10];
	int width, height, rows, cols, x, y;

	WINDOW * mainWin, * catDisp, * incDisp;
	
#endif
