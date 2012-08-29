#include <stdio.h>

void display(char str[]);
int square(int x);
int cube(int y);

int main()
{
	int x = 4;
	int y = 4;

	display("This string gets passed to a function");

	printf("%dx%d   = %d\n", x, x, square(x));
	printf("%dx%dx%d = %d\n", y, y, y, cube(y));

	return 0;
}

void display(char str[])
{
	printf("%s\n", str);
}

int square(int x)
{
	return x * x;
}

int cube(int y)
{
	return y * y * y;
}
