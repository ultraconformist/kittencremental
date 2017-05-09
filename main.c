/* Kittencremental - An incremental game
   about cats. In a terminal.
   By Morgan (@Ultraconformist) */

#include <stdio.h>
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
	cbreak(); noecho(); getmaxyx(stdscr, maxY, maxX);

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
<<<<<<< HEAD
	// Main program loop

=======

	// pthread to grab input
	pthread_t	char_getter_thread;
	pthread_create(&char_getter_thread, NULL, charGetter, NULL);
	// Main program loop
>>>>>>> origin/Working
	while ( buttonClick != 'q' ) {
		buttonClick = getch();

		if (buttonClick == 'i') 
			{	
			kittens++;
			}

		if (buttonClick == 'o' && kittens >= 10)
			{
			foodCans++;
			kittens -= 10;
			updateKittens();
			}

		catBox();
		incBox();
<<<<<<< HEAD
=======
		boxIncrementer();
		updateKittens();
		i++;
		usleep(10000);
>>>>>>> origin/Working
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

void incBox() {
	sprintf(canString, "Cans: %i", foodCans);
	mvwaddstr(incDisp, 1, 4, canString); 
	mvwaddstr(incDisp, 2, 2, "Can: 10 Kittens");
	mvwaddstr(incDisp, 3, 2, "Press o to buy");
	box(incDisp, 0, 0);
	wrefresh(incDisp);
}

void updateKittens() {
	wmove(catDisp, 1, 4);
	wclrtoeol(catDisp);
}
