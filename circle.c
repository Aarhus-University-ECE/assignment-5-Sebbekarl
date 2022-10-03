#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
#include "circle.h"


void fiveCircles(circle c[]) {
	//loops through the circles and defines the circle to have radius i and have a center at (i,i)
	for(int i = 0; i<5;i++){
        c[i].p.x = i;
        c[i].p.y = i;
        c[i].r = i;

    }

	return;
}

bool circleIsValid(const circle * c) {
	//checks if circle radius is larger than 0
	return c->r > 0;
}

void translate(circle* c, const point* p) {
	//add the point p's x and y to the circle's center point to move the circle
    c->p.x += p->x;
    c->p.y += p->y;
	return;
}



