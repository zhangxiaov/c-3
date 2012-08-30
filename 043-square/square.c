#include <stdio.h>
#include "utils.h"

void get_num();

int main()
{
	get_num();
	printf("End.\n");

	return 0;
}

void get_num()
{
	int num;
	char letter;
	const char OK = 'Y', ok = 'y';

	printf("Enter an integer to be squared: ");
	scanf("%d", &num);

	printf("%d squared is %d\n", num, square(num));

	printf("Square another number? Y or N: ");
	scanf("%1s", &letter);

	if ((letter == ok) || (letter == OK)) {
		get_num();
	}

	return;
}
