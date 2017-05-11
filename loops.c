#include <curses.h>
#include "main.h"
#include "loops.h"

void boxIncrementer()
{
	if (tick == INCRATE){
		kittens += (foodCans*2);
		kittens += (tunaPools*10);
		perSecond = (foodCans)*2+(tunaPools*10);
		tick = 0;
	}
	else if (tick > INCRATE){
		tick = 0;
	}
}

void charGetter()
{
		ch = getch();
		switch (ch)
		{
			case 'm':
				if (meowSwitch == 0)
				    mvwaddstr(catDisp, 5, 2, "    ");
					meowSwitch = 1;	
				break;
			case 'c':
				if (kittens >= canValue) {
				foodCans++;
				kittens -= canValue;
				canValue *= 1.5;
				}
				break;
		    case 'e':
				if (meowSwitch == 1)
						meowSwitch = 2;
				break;
		    case 'o':
				if (meowSwitch == 2)
						meowSwitch = 3;
				break;
		    case 'w':
				if (meowSwitch == 3) {
						kittens++;
						meowSwitch = 4;
						}
				break;
			case 'f':
				if (kittens >= tunaValue) {
				tunaPools++;
				kittens -= tunaValue;
				tunaValue *= 1.5;
				}
				break;
			case 'q':
				terminate = true;
				break;
			default:
				break;
		}
	}
