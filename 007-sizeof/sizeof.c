#include <stdio.h>

int main()
{
	printf("short int:         %ld bytes\n", sizeof(short int));
	printf("long int:          %ld bytes\n", sizeof(long int));
	printf("unsigned long int: %ld bytes\n", sizeof(unsigned long int));
	printf("char:              %ld byte\n", sizeof(char));
	printf("float:             %ld bytes\n", sizeof(float));
	printf("double:            %ld bytes\n", sizeof(double));

	return 0;
}
