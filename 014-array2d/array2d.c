#include <stdio.h>

int main()
{
	/*
	Characters in this example are stored as their ASCII integer value
	then converted back to characters for display by the %c format specifier
	*/

	int arr[2][3] = {
		{ 'A', 'B', 'C' },
		{  1 ,  2 ,  3  },
	};

	printf("array [0][0] contains %c\n", arr[0][0]);
	printf("array [0][1] contains %c\n", arr[0][1]);
	printf("array [0][2] contains %c\n", arr[0][2]);

	printf("array [1][0] contains %d\n", arr[1][0]);
	printf("array [1][1] contains %d\n", arr[1][1]);
	printf("array [1][2] contains %d\n", arr[1][2]);

	return 0;
}
