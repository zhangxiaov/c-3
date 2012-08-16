#include <stdio.h>

enum colours { RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };

/* declare a custom type, of the enum colours type */
typedef enum colours COLOURS;

/* declare a custom unsigned short int type */
typedef unsigned short int USHRT;

int main()
{
	/* declare variables of the custom data types */
	USHRT num = 16;
	COLOURS fingers = (COLOURS) BROWN + PINK;

	printf("Values: %d %d\n", fingers, num);

	return 0;
}
