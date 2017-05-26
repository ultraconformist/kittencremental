// This file contains all loops that run throughout the program's operation.
#include <curses.h>
#include "main.h"
#include "balance.h"

/* boxIncrementer increases the value of kittens according to the rate of 
 * change per incremental object. */

void boxIncrementer()
{
    if (tick == INCRATE/4 && meowSwitch == 0 ||
		tick == INCRATE/4 && meowSwitch == 4){
		wmove(catDisp, 5, 2);
		wclrtoeol(catDisp);
		meowSwitch = 0;
	}
	if (tick == INCRATE){
		kibble		+= 	(foodCans*FOODCANVALUE);
		kibble 		+= 	(tunaPools*TUNAVALUE);
		perSecond 	= 	(foodCans*FOODCANVALUE) +
						(tunaPools*TUNAVALUE);
		tick = 0;
	}
	else if (tick > INCRATE){	// Failsafe if tick exceeds INCRATE
		tick = 0;				
	}
}

/*	charGetter grabs a character from the user and uses a switch to manipulate 
 *	other variables as a result. */

void charGetter()
{
		ch = getch();
		switch (ch)
		{
			/*	meowSwitch counts to 4, each subsequent notch representing a 
			 *	subsequent character of the user typing "meow." */
			case 'm':
				if (meowSwitch == 0)
						meowSwitch = 1;	
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
						kibble += meowValue;
						meowSwitch = 4;
						}
				break;
			case 'c':
				if (kibble >= canValue) {
				foodCans++;
				kibble -= canValue;
				canValue *= PURCHASECOSTMULTIPLIER;
				}
				break;
			case 'f':
				if (kibble >= tunaValue) {
				tunaPools++;
				kibble -= tunaValue;
				tunaValue *= PURCHASECOSTMULTIPLIER;
				}
				break;
		    case 'a':
				if (kibble >= meowUpgradeCost) {
				meowValue *= UPGRADEMULTIPLIER;
				kibble -= meowUpgradeCost;
				meowUpgradeCost *= UPGRADECOSTMULTIPLIER;
				}
				break;
			case 'q':
				terminate = true;
				break;
			default:
				break;
		}
}
