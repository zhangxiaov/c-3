#include <stdio.h>

int main()
{
	char character;
	int a, b;

	printf("Enter any one keyboard character: ");
	scanf("%c", &character);

	printf("Enter 2 integers separated by a space: ");
	scanf("%d %d", &a, &b);

	printf("The letter entered was %c\n", character);
	printf("Integers entered were %d and %d\n", a, b);

	return 0;
}
