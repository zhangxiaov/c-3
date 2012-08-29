#include <stdio.h>

int main()
{
	int i = 0;

	while (i < 6) {
		i++;

		if (i == 3) {
			continue;
		}

		printf("Loop iteration is %d\n", i);
		printf("Go to the next pass\n\n");
	}

	return 0;
}
