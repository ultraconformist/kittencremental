// Kittencremental main header
#ifndef MAIN_H_ 
#define MAIN_H_ 

	void catBox();
	void incBox();
	void updateKittens();
	void *boxIncrementer(void *inc_void_ptr);
	void *charGetter(void *char_void_ptr);

	int maxX, maxY;	
	int kittens;
	int foodCans;
	int i;
	char buttonClick;
	char kittenString[10];	
	char canString[10];
	int width, height, rows, cols, x, y;

	WINDOW * mainWin, * catDisp, * incDisp;
	
#endif
