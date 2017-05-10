#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <curses.h>
#include "main.h"

void updateKittens() {
	wmove(catDisp, 1, 4);
	wclrtoeol(catDisp);
	wclrtoeol(incDisp);
}

void updateBoxes() {
	catBox();
	incBox();
	buttonClick = ' ';
}
