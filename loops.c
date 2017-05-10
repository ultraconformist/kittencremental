#include <unistd.h>
#include <curses.h>
#include "main.h"
#include "loops.h"

void boxIncrementer()
{
	if (tick == INCRATE){
		kittens += (foodCans*2);
		kittens += (tunaPools*10);
		tick = 0;
	}
}

void charGetter()
{
		buttonClick = getch();
		switch (buttonClick)
		{
			case 'i':
				kittens++;
				buttonClick = ' ';
				break;
			case 'o':
				if (kittens >= canValue) {
				foodCans++;
				kittens -= canValue;
				canValue *= 1.5;
				}
				buttonClick = ' ';
				break;
			case 'f':
				if (kittens >= tunaValue) {
				tunaPools++;
				kittens -= tunaValue;
				tunaValue *= 1.5;
				}
				buttonClick = ' ';
				break;
			case 'q':
				terminate = true;	
				endwin();
				break;
			default:
				buttonClick = ' ';
				break;
		}
	
}
				


