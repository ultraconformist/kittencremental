#include <curses.h>
#include "main.h"

void updateKittens() {
	wmove(catDisp, 1, 4);
	wclrtoeol(catDisp);
	wclrtoeol(canDisp);
	perSecond = (foodCans)*2+(tunaPools*10);
}

// updateBoxes calls other functions to re-render
// the boxes on screen
void updateBoxes() {
	catBox();
	canBox();
	tunaBox();
}
