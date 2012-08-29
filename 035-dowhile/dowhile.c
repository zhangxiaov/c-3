#include <stdio.h>

int main()
{
	int a = 0, i = 0;

	do {
		++a;
		++i;
		printf("Variable a is %d\n", a);
	} while (i < 1);

	return 0;
}
