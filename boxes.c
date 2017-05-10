#include <stdio.h>
#include <curses.h>
#include "main.h"

void catBox() {

	sprintf(kittenString, "Kittens: %i", kittens);
	mvwaddstr(catDisp, 1, 4, kittenString);
	mvwaddstr(catDisp, 2, 2, "Press i for more.");
	mvwaddstr(catDisp, 3, 2, "Press q to quit.");
	box(catDisp, 0, 0);
	wrefresh(catDisp);
}

void canBox() {
	sprintf(canString, "Cans: %i", foodCans);
	sprintf(canPrice, "Can: %Ld Kittens", canValue);
	mvwaddstr(canDisp, 1, 4, canString);
	mvwaddstr(canDisp, 2, 2, canPrice); 
	mvwaddstr(canDisp, 3, 2, "Press o to buy");
	box(canDisp, 0, 0);
	wrefresh(canDisp);
}

void tunaBox() {
	sprintf(tunaString, "Tuna Pools: %i", tunaPools);
	sprintf(tunaPrice, "Pool: %Ld", tunaValue);
	mvwaddstr(tunaDisp, 1, 4, tunaString);
	mvwaddstr(tunaDisp, 2, 2, tunaPrice);
	mvwaddstr(tunaDisp, 3, 2, "Press f to buy.");
	box(tunaDisp, 0, 0);
	wrefresh(tunaDisp);
}
