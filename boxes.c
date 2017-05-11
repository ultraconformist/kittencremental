#include <stdio.h>
#include <curses.h>
#include "main.h"

void catBox() {

	sprintf(kittenString, "Kittens: %i", kittens);
	sprintf(rateString, "%i/sec.", perSecond);
	mvwaddstr(catDisp, 1, 4, kittenString);
	mvwaddstr(catDisp, 2, 2, "Type meow for more.");
	mvwaddstr(catDisp, 3, 2, "Press q to quit.");
	mvwaddstr(catDisp, 4, 2, rateString);
	switch(meowSwitch)
		{
		case 0:
			break;
		case 1:
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
