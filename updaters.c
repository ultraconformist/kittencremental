#include <curses.h>
#include "main.h"

void updateKittens() {
	wmove(catDisp, 1, 4);
	wclrtoeol(catDisp);
	wclrtoeol(canDisp);
	perSecond = (foodCans)*2+(tunaPools*10);
}

void updateBoxes() {
	catBox();
	canBox();
	tunaBox();
	buttonClick = ' ';
}
