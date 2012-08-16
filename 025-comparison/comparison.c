#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 1;
	char d = 'A', e = 'a';

	printf("Equality example:\n");
	printf("\t Is a equal to b? (%d == %d) \t %d (true)\n", a, b, a == b);
	printf("\t Is d equal to e? (%c == %c) \t %d (false)\n", d, e, d == e);

	printf("Inequality example:\n");
	printf("\t Is a not equal to c? (%d != %d) \t %d (true)\n", a, c, a != c);

	printf("Greater than example:\n");
	printf("\t Is a greater than c? (%d > %d) \t %d (false)\n", a, c, a > c);

	printf("Less than example:\n");
	printf("\t Is a less than c? (%d < %d) \t %d (true)\n", a, c, a < c);

	printf("Greater than or equal to example:\n");
	printf("\t Is a greater than or equal to b? (%d >= %d) \t %d (true)\n", a, b, a >= b);

	printf("Less than or equal to example:\n");
	printf("\t Is c less than or equal to a? (%d <= %d) \t %d (true)\n", c, a, c <= a);

	return 0;
}
