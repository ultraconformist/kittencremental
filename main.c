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
		fprintf(stderr, "Problems with ncurses.\n");
		exit(EXIT_FAILURE);
	}
	initscr(); cbreak(); noecho();
	getmaxyx(stdscr, maxY, maxX);

	/* Child window dimensions */
	width = 20, height = 	  7;
	rows  = 25,  cols  = 	 80;
	x	  = (cols - width)  / 2;	
	y	  = (rows - height) / 2;	

	/* Make child window */
	childWin = subwin(mainWin, height, width, y, x);
	catBox();
	refresh();

	// Main program loop

	while ( buttonClick != 'q' ) {
		buttonClick = getch();
		if (buttonClick == 'i') 
			{	
			kittens++;
			clear();
			}
		else
			{
			clear();
			}
		catBox();
		}	

	// Cleanup under here
	endwin();
	return 0;
}

void catBox() {

	sprintf(kittenString, "Kittens: %i", kittens);
	mvwaddstr(childWin, 1, 4, kittenString);
	mvwaddstr(childWin, 2, 2, "Press i for more.");
	mvwaddstr(childWin, 3, 2, "Press q to quit.");
	box(childWin, 0, 0);	

}
