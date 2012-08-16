#include <stdio.h>

/* define and initialize a static external variable */
static int num = 100;

int main()
{
	extern int num;

	printf("Global value: %d\n", num);

	return 0;
}
