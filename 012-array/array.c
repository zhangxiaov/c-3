#include <stdio.h>

int main()
{
	/* create an integer array with three elements */
	int arr[3] = { 10, 2, 8 };

	arr[1] = 9;

	printf("element 0 contains %d\n", arr[0]);
	printf("element 1 contains %d\n", arr[1]);
	printf("element 2 contains %d\n", arr[2]);

	return 0;
}
