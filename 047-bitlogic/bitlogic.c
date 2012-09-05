#include <stdio.h>

int main()
{
	int num1 = 13, num2 = 7, num3 = 15;

	/* Bitwise AND operator */
	printf("%d & %d = %d\n", num1, num2, (num1 & num2));

	/* Bitwise OR operator */
	printf("%d | %d = %d\n", num1, num2, (num1 | num2));

	/* Bitwise XOR operator */
	printf("%d ^ %d = %d\n", num1, num2, (num1 ^ num2));

	/* Bitwise NOT operator */
	unsigned short int num4 = ~num3, num5 = ~num4;

	printf("num3 = ~%d = %d\n", num3, num4);
	printf("~num3 = %d\n", num5);

	return 0;
}
