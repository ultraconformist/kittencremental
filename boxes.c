#include <stdio.h>
#include <curses.h>
#include "main.h"

/* catBox commits the quantity of kittens to a string,    rate of change to a 
 * string, and renders both in  the catDisp window. */

void catBox() {

	sprintf(kibbleString, "Kibble: %.0f", kibble);
	sprintf(rateString, "%i/sec.", perSecond);
	mvwaddstr(catDisp, 1, 4, kibbleString);
	mvwaddstr(catDisp, 2, 2, "Type meow for more.");
	mvwaddstr(catDisp, 3, 2, "Press q to quit.");
	mvwaddstr(catDisp, 4, 2, rateString);

	/* This switch checks the current state of the meowSwitch variable 
	 * containing the  user's progress in typing "meow" and updates the string 
	 * on screen accordingly */
  
	switch(meowSwitch)
		{
		case 0:
		    break;
		case 1:
		    wmove(catDisp, 5, 2);
			wclrtoeol(catDisp);
			mvwaddstr(catDisp, 5, 2, "m");
			break;
		case 2:
			mvwaddstr(catDisp, 5, 2, "me");
			break;
		case 3:
			mvwaddstr(catDisp, 5, 2, "meo");
			break;
		case 4:
			mvwaddstr(catDisp, 5, 2, "meow");
			meowSwitch = 0;
			break;
		}
	box(catDisp, 0, 0);
	wrefresh(catDisp);
}

/* canBox does similar to catBox, but with the cans variable and can value. */

void canBox() {
	sprintf(canString, "Cans: %i", foodCans);
	sprintf(canPrice, "Can: %i Kittens", canValue);
	mvwaddstr(canDisp, 1, 4, canString);
	mvwaddstr(canDisp, 2, 2, canPrice); 
	mvwaddstr(canDisp, 3, 2, "Press c to buy");
	mvwaddstr(canDisp, 4, 2, "Worth 2/sec.");
	box(canDisp, 0, 0);
	wrefresh(canDisp);
}

/* Ditto, with tunaPools. */

void tunaBox() {
	sprintf(tunaString, "Tuna Pools: %i", tunaPools);
	sprintf(tunaPrice, "Pool: %i kittens.", tunaValue);
	mvwaddstr(tunaDisp, 1, 4, tunaString);
	mvwaddstr(tunaDisp, 2, 2, tunaPrice);
	mvwaddstr(tunaDisp, 3, 2, "Press f to buy.");
	mvwaddstr(tunaDisp, 4, 2, "Worth 10/sec.");
	box(tunaDisp, 0, 0);
	wrefresh(tunaDisp);
}

/* upgradeBox contains upgrades. */

void upgradeBox() {
	sprintf(valueString, "Each meow is worth %i", meowValue);
	sprintf(costPrice, "Meow (a): %i", meowUpgradeCost);
	mvwaddstr(upgradeDisp, 1, 2, valueString);
	mvwaddstr(upgradeDisp, 2, 2, costPrice);
	box(upgradeDisp, 0, 0);
	wrefresh(upgradeDisp);
}
