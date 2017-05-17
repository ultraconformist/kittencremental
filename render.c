#include <curses.h>
#include <stdlib.h>
#include "main.h"
#include "balance.h"

void Initialize() {

	/* Set initial values */
	canValue = INITIALCANVALUE;
	tunaValue = INITIALTUNAVALUE;
	meowUpgradeCost = INITIALMEOWCOST;
	meowValue = 1;
	meowSwitch = 0;
	kittens = 0;
	terminate = false;

	// Initialize ncurses and get term size
	if ( (mainWin = initscr()) == NULL ) {
		fprintf(stderr, "Error loading ncurses.\n");
		exit(EXIT_FAILURE);
	}
	cbreak(); noecho();  getmaxyx(stdscr, maxY, maxX);
	timeout(0);
	
	/* Standard box dimensions */ 
	width = 25, height = 	  7;
	rows  = 25,  cols  = 	 80;
	
	/* Make cat display window */
	catDisp = subwin(mainWin, height, width, 15, 0);
	canDisp = subwin(mainWin, height, width, 0, 0); 
	tunaDisp = subwin(mainWin, height, width, 0, 25);
	upgradeDisp = subwin(mainWin, height, width, 8, 0);
	updateBoxes();
}
