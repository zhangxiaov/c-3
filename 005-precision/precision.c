#include <stdio.h>

int main()
{
	float num = 7.123456;

	printf("%-8.0f end\n", num);
	printf("%-8.2f end\n", num);
	printf("%-8.4f end\n", num);
	printf("%-8.6f end\n", num);

	return 0;
}
