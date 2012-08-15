#include <stdio.h>

int main()
{
	int num = 1;

	printf("Using %%0d  displays %0d\n", num);
	printf("Using %%1d  displays %1d\n", num);
	printf("Using %%2d  displays %2d\n", num);
	printf("Using %%3d  displays %3d\n", num);
	printf("Using %%4d  displays %4d\n", num);
	printf("Using %%05d displays %05d\n", num);
	printf("Using %%06d displays %06d\n", num);
	printf("Using %%07d displays %07d\n", num);

	return 0;
}
