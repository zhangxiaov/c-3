#include <stdio.h>
#define DEBUG 2

int main()
{
	#if DEBUG == 1
		printf("Debug Status is 1\n");
	#elif DEBUG == 2
		printf("Debug Status is 2\n");
	#else
		printf("Default Debug Status\n");
	#endif

	#undef DEBUG

	#ifndef DEBUG
		printf("Debug Status is OFF\n");
	#endif

	return 0;
}
