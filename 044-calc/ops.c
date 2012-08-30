#include <stdio.h>
#include "utils.h"

void getnum()
{
	int num;

	printf("Enter an integer to be squared: ");
	scanf("%d", &num);

	printf("%d squared is %d\n", num, square(num));

	menu();
}

void getnums()
{
	int x, y;
	
	printf("Enter 2 number to be multiplied, separated by a space: ");
	scanf("%d %d", &x, &y);

	printf("%d x %d = %d\n", x, y, multiply(x, y));

	menu();
}

