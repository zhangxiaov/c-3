#include <stdio.h>

#ifdef _WIN32
	#define SYS "Windows"
#endif

#ifdef linux
	#define SYS "Linux"
#endif

int main()
{
	printf("Operating System: %s\n", SYS);

	return 0;
}
