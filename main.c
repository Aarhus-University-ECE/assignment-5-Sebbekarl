#include <stdio.h>
#include<malloc.h>
#include <assert.h>
#include "circle.h"
#include"jollyjumper.h"

void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d \n", circleIsValid(&c[1]));


	int n; /*number of numbers to read*/
	printf("number of element in the list: ");
	scanf("%d", &n); //defines the size of the array
	assert(n > 0);  //checks that the size of the array is larger than 0

	int *numbers = malloc(sizeof(int) * n); /*the numbers read*/

	// takes the input and put them in an array
	printf("input the number in the list separated by spaces: \n");
	for(int i = 0; i<n;i++){
		scanf("%d", &numbers[i]);
	}

	if (isJollyJumber(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}
	return 0;

}
