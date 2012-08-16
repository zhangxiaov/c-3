#include <stdio.h>

/* define an external variable */
int num;

int main()
{
	/* declare the external variable, like PHP globals? */
	extern int num;

	/* give the external variable a value */
	num = 5;

	printf("Global variable value is %d\n", num);

	return 0;
}
