#include <stdio.h>

void input_int();
int square(int num);

int main()
{
	input_int();
	printf("End.\n");

	return 0;
}

void input_int()
{
	int num;

	printf("Enter an integer to be squared: ");
	scanf("%d", &num);

	printf("%d squared is %d\n", num, square(num));
}

int square(int num)
{
	return num * num;
}
