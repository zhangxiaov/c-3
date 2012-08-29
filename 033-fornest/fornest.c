#include <stdio.h>

int main()
{
	int i, x;

	for (i = 1; i <= 3; i++) {
		printf("Outer loop iteration number: %d\n", i);

		for (x = 1; x <= 3; x++) {
			printf("\tInner loop iteration number: %d\n", x);
		}
	}

	return 0;
}
