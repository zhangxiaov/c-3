#include <stdio.h>

int main()
{
	if (5 > 1) {
		if ('A' == 'A') {
			if (1 != 0) {
				printf("Nested Ifs:\n");
				printf("Yes, 5 is greater than 1\n");
				printf("and A is equal to A\n");
				printf("and 1 does not equal 0\n\n");
			}
		}
	}

	if ((5 > 1) && ('A' == 'A') && (1 != 0)) {
		printf("Alternative Example:\n");
		printf("Yes, 5 is greater than 1\n");
		printf("and A is equal to A\n");
		printf("and 1 does not equal 0\n");
	}

	return 0;
}
