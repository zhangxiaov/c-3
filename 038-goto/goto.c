#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i < 4; i++) {
		printf("Outer loop iteration number %d\n", i);

		for (j = 1; j < 4; j++) {
			printf("\tInner loop iteration number %d\n", j);

			if (j == 3) {
				goto end;
			}
		}
	}
	
	end:
	printf("\nEnd.\n");

	return 0;
}
