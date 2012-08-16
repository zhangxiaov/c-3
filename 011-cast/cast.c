#include <stdio.h>

int main()
{
	int num1, num2;
	float dec;
	char letter;

	dec = 7.5;
	letter = 'A';

	num1 = (int) dec;
	num2 = (int) letter;

	printf("num1 is: %d\n", num1);
	printf("num2 is: %d\n", num2);

	return 0;
}
