#include <curses.h>
#include <stdlib.h>
#include "main.h"

void Initialize() {

	/* Set initial values */
	canValue = 10;
	tunaValue = 100;
	terminate = false;
	meowSwitch = 0;

	// Initialize ncurses and get term size
	if ( (mainWin = initscr()) == NULL ) {
		fprintf(stderr, "Error loading ncurses.\n");
		exit(EXIT_FAILURE);
	}
	cbreak(); noecho();  getmaxyx(stdscr, maxY, maxX);
	timeout(0);
	
	/* Cat display window dimensions */
	width = 25, height = 	  7;
	rows  = 25,  cols  = 	 80;
	x	  = maxX  / 2;	
	y	  = maxY / 2;	
	
	/* Make cat display window */
	catDisp = subwin(mainWin, height, width, 15, 0);
	canDisp = subwin(mainWin, height, width, 0, 0); 
	tunaDisp = subwin(mainWin, height, width, 0, 25);
	updateBoxes();
}
