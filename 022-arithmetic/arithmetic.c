#include <stdio.h>

int main()
{
	int a = 4, b = 8, c = 1, d = 1, result;

	result = a + b;
	printf("Added numbers total:         %d\n", result);

	result = b - a;
	printf("Subtracted numbers total:    %d\n", result);

	result = a * b;
	printf("Multiplied numbers total:    %d\n", result);

	result = b / a;
	printf("Divided numbers total:       %d\n", result);

	result = a % b;
	printf("Modulus of numbers is:       %d\n", result);

	printf("Postfix increment is:        %d\n", c++);
	printf("Postfix increment is now:    %d\n", c);

	printf("Prefix increment is:         %d\n", ++d);
	printf("Prefix increment is now:     %d\n", d);

	return 0;
}
