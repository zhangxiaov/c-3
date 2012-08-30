#include <stdio.h>

void menu()
{
	int num;

	printf("\n\tEnter the number of an operation:\n");
	printf("\t1. Square a number\n");
	printf("\t2. Multiply two numbers\n");
	printf("\t3. Exit\n");
	scanf("%d", &num);

	switch (num) {
		case 1:
			getnum();
			break;
		case 2:
			getnums();
			break;
		case 3:
			return;
	}
}
