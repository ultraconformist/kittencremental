// Kittencremental main header
#ifndef main_h
#define main_h

	void catBox();
	void incBox();
	void updateKittens();
	void *boxIncrementer(void *inc_void_ptr);
	void *charGetter(void *char_void_ptr);

	int maxX, maxY;	
	int kittens = 0;
	int foodCans = 0;
	int i;
	char buttonClick = ' ';
	char kittenString[10];	
	char canString[10];
	int width, height, rows, cols, x, y;
	static int NUM_THREADS = 1;

	WINDOW * mainWin, * catDisp, * incDisp;
	
#endif
