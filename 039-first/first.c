#include <stdio.h>

/* Declare function prototypes */
void first();
int square5();
int cube5();


int main()
{
	int num;

	first();

	num = square5();
	printf("5x5   = %d\n", num);

	printf("5x5x5 = %d\n", cube5());

	return 0;
}

void first()
{
	printf("Hello from my first() function\n");
}

int square5()
{
	return 5 * 5;
}

int cube5()
{
	return 5 * 5 * 5;
}
