/* Kittencremental - An incremental game
   about cats. In a terminal.
   By Morgan (@Ultraconformist) */

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <curses.h>
#include "main.h"

int main(void)
{
	// Initialize ncurses and get term size
	if ( (mainWin = initscr()) == NULL ) {
		fprintf(stderr, "Error loading ncurses.\n");
		exit(EXIT_FAILURE);
	}
	cbreak(); noecho();  getmaxyx(stdscr, maxY, maxX);
	timeout(1);
	
	/* Cat display window dimensions */
	width = 25, height = 	  7;
	rows  = 25,  cols  = 	 80;
	x	  = maxX  / 2;	
	y	  = maxY / 2;	
	
	/* Set initial values */
	canValue = 10;
	tunaValue = 100;
	terminate = false;

	/* Make cat display window */
	catDisp = subwin(mainWin, height, width, y, x);
	canDisp = subwin(mainWin, height, width, 0, 0); 
	tunaDisp = subwin(mainWin, height, width, 0, 25);
	updateBoxes();

	// Main program loop
	while ( terminate == false ) {
		charGetter();
		updateBoxes();
		boxIncrementer();
		updateKittens();
		usleep(MILSEC);
		tick++;
		}	

	// Cleanup here
	endwin();

	return 0;
}
