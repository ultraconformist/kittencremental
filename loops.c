#include <unistd.h>
#include <curses.h>
#include "main.h"
#include "loops.h"

void boxIncrementer()
{
	if (tick == CANRATE){
		kittens += (foodCans);
		tick = 0;
	}
}

void *charGetter(void *char_void_ptr)
{
	while (buttonClick != 'q' ) {
		buttonClick = getch();
	}
}

