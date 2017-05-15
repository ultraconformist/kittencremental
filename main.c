/* Kittencremental - An incremental game about cats. In a terminal.
 * By Morgan (@Ultraconformist) */

#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include "main.h"

int main(void)
{

	// Call initializer; defines variables and builds initial ncurses windows
	Initialize();

	// Main program loop
	while ( terminate == false ) {
		updateBoxes();
		boxIncrementer();
		updateKittens();
		charGetter();
		usleep(MILSEC);
		tick++;
		}	

	// Cleanup here
	endwin();
	return 0;
}
