#include <unistd.h>
#include <curses.h>
#include "main.h"

void *boxIncrementer( void *inc_void_ptr )
{
	while (buttonClick != 'q' ) {
		if (foodCans > 0) {
			kittens *= foodCans;
			updateKittens();
			sleep(2);
		}
		else
			sleep(2);
		}
	return NULL;
}

void *charGetter( void *char_void_ptr )
{
	while (buttonClick != 'q' ) {
		buttonClick = getch();
	}

	return NULL;
}

