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

	/* Cat display window dimensions */
	width = 20, height = 	  7;
	rows  = 25,  cols  = 	 80;
	x	  = maxX  / 2;	
	y	  = maxY / 2;	

	/* Make cat display window */
	catDisp = subwin(mainWin, height, width, y, x);
	incDisp = subwin(mainWin, height, width, 0, 0); 
	catBox();
	incBox();

	// pthread for parallel work
	pthread_t box_incrementer_thread, char_getter_thread;
	pthread_create(&char_getter_thread, NULL, charGetter, NULL);
	pthread_create(&box_incrementer_thread, NULL, boxIncrementer, NULL );	
	// Main program loop
	
	while ( buttonClick != 'q' ) {
		if (buttonClick == 'i') 
			{	
			buttonClick = ' ';
			kittens++;
			}

		if (buttonClick == 'o' && kittens >= 10)
			{
			buttonClick = ' ';
			foodCans++;
			kittens -= 10;
			}
		catBox();
		incBox();
		wrefresh(incDisp); wrefresh(catDisp);
		}	

	// Cleanup under here
	endwin();
	return 0;
}

void updateKittens() {
	wmove(catDisp, 1, 4);
	wclrtoeol(catDisp);
}

