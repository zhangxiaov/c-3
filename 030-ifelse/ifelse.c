#include <stdio.h>

int main()
{
	int num = 2, bool = 0;

	if ((num == 2) && (bool)) {
		printf("The first test is untrue\n");
	}
	else if ((num == 2) && (!bool)) {
		printf("The second test is true\n");
	}
	else if ((num == 2) && (bool == 0)) {
		printf("The third test is true but unreached\n");
	}

	return 0;
}
