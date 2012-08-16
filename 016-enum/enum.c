#include <stdio.h>

int main()
{
	enum colours { RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };
	int total;

	printf("I potted a red word %d\n", RED);
	printf("Then a black worth %d\n", BLACK);
	printf("Followed by another red worth %d\n", RED);

	total = RED + BLACK + RED;

	printf("Altogether I scored %d\n", total);

	return 0;
}
