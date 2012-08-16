#include <stdio.h>

int main()
{
	int a = 1, b = 0;

	printf("AND examples:\n");
	printf("\t a && a = %d (true)\n", a && a);
	printf("\t a && b = %d (false)\n", a && b);
	printf("\t b && b = %d (false)\n", b && b);

	printf("OR examples:\n");
	printf("\t a || a = %d (true)\n", a || a);
	printf("\t a || b = %d (true)\n", a || b);
	printf("\t b || b = %d (false)\n", b || b);

	printf("NOT examples:\n");
	printf("\t a = %d !a = %d\n", a, !a);
	printf("\t b = %d !b = %d\n", b, !b);

	return 0;
}
