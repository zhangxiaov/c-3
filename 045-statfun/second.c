#include <stdio.h>

static int secret();

void call_external()
{
	printf("Secret number is %d\n", secret());
}

static int secret()
{
	return 123456;
}
