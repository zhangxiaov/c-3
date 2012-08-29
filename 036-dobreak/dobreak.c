#include <stdio.h>

int main()
{
	int i = 0;

	while (i < 10) {
		++i;
		printf("Loop iteration is %d\n", i);

		/* If the counter hits 7, end this loop now */
		if (i == 7) {
			break;
		}

		printf("Go to the next pass\n\n");
	}

	return 0;
}
