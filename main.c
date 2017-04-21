/* Kittencremental - An incremental game
   about cats. In a terminal.
   By Morgan (@Ultraconformist) */

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "main.h"

int main(void)
{
	// Initialize ncurses and get term size
	if ( (mainWin = initscr()) == NULL ) {
		fprintf(stderr, "Error loading ncurses.\n");
		exit(EXIT_FAILURE);
	}
	cbreak(); noecho(); getmaxyx(stdscr, maxY, maxX);

	/* Cat display window dimensions */
	width = 20, height = 	  7;
	rows  = 25,  cols  = 	 80;
	x	  = maxX  / 2;	
	y	  = maxY / 2;	

	/* Make cat display window */
	catDisp = subwin(mainWin, height, width, y, x);
	catBox();
	refresh();

	// Main program loop

	while ( buttonClick != 'q' ) {
		buttonClick = getch();
		if (buttonClick == 'i') 
			{	
			kittens++;
			}
		catBox();
		}	

	// Cleanup under here
	endwin();
	return 0;
}

void catBox() {

	sprintf(kittenString, "Kittens: %i", kittens);
	mvwaddstr(catDisp, 1, 4, kittenString);
	mvwaddstr(catDisp, 2, 2, "Press i for more.");
	mvwaddstr(catDisp, 3, 2, "Press q to quit.");
	box(catDisp, 0, 0);	
	wrefresh(catDisp);

}
