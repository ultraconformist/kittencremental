#include <stdio.h>
#include <curses.h>
#include "main.h"

void catBox() {

	sprintf(kittenString, "Kittens: %i", kittens);
	mvwaddstr(catDisp, 1, 4, kittenString);
	mvwaddstr(catDisp, 2, 2, "Press i for more.");
	mvwaddstr(catDisp, 3, 2, "Press q to quit.");
	box(catDisp, 0, 0);
}

void incBox() {
	sprintf(canString, "Cans: %i", foodCans);
	mvwaddstr(incDisp, 1, 4, canString);
	mvwaddstr(incDisp, 2, 2, "Can: 10 Kittens");
	mvwaddstr(incDisp, 3, 2, "Press o to buy");
	box(incDisp, 0, 0);
}
