#include <stdio.h>

void decrement(int x);

int main()
{
	int x;

	printf("Enter a positive integer to count down from: ");
	scanf("%d", &x);

	decrement(x);

	printf("End.\n");

	return 0;
}

void decrement(int x)
{
	printf("%d\n", x--);

	if (x < 0) {
		return;
	}

	decrement(x);
}
