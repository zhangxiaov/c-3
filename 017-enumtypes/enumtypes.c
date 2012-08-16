#include <stdio.h>

int main()
{
	/* declare a sequence of constants */
	enum colours { RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };

	/* declare a variable of the enumerated data type */
	enum colours fingers;

	/* assign valid constants from the colours list */
	fingers = (enum colours) PINK + BROWN;

	printf("value: %d\n", fingers);

	return 0;
}
