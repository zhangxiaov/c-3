#include <stdio.h>

int main()
{
	/* Adding the special \0 null character escape sequence in the array's final element promotes the array to string status */
	char arr[5] = { 'L', 'u', 'k', 'e', '\0' };

	printf("The array contains the string: %s\n", arr);

	return 0;
}
