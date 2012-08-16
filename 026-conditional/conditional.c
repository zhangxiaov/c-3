#include <stdio.h>

int main()
{
	int num1 = 13579;
	int num2 = 24680;
	char letter;

	printf("%d is ", num1);
	(num1 % 2) ? printf("odd") : printf("even");

	printf("\n%d is ", num2);
	(num2 % 2) ? printf("odd") : printf("even");

	letter = (num2 % 2) ? 'Y' : 'N';
	printf("\nIs %d odd?: %c\n", num2, letter);

	return 0;
}
