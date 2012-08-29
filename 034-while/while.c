#include <stdio.h>

int main()
{
	int a = 30, b = 15, i = 3;

	while (i > 0) {
		a -= 10;
		b -= 5;
		i--;

		printf("Variable a is %d\n", a);
		printf("Variable b is %d\n\n", b);
	}

	return 0;
}
