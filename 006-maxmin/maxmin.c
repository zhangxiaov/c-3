#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Max int:    %d\t\t\t", INT_MAX);
	printf("Min int:    %d\n", INT_MIN);

	printf("Max short:  %d\t\t\t", SHRT_MAX);
	printf("Min short:  %d\n", SHRT_MIN);

	printf("Max long:   %ld\t\t", LONG_MAX);
	printf("Min long:   %ld\n", LONG_MIN);

	return 0;
}
