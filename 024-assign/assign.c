#include <stdio.h>

int main()
{
	int a, b;

	printf("Assign values example:\n");
	printf("\t Variable a = %d\n", a = 8);
	printf("\t Variable b = %d\n", b = 4);

	printf("Add & assign example:\n");
	printf("\t Variable a += b; (%d += %d)", a, b);
	printf("\t a = %d\n", a += b);

	printf("Subtract & assign example:\n");
	printf("\t Variable a -= b; (%d -= %d)", a, b);
	printf("\t a = %d\n", a -= b);

	printf("Multiply & assign example:\n");
	printf("\t Variable a *= b; (%d *= %d)", a, b);
	printf("\t a = %d\n", a *= b);

	printf("Divide & assign example:\n");
	printf("\t Variable a /= b; (%d /= %d)", a, b);
	printf("\t a = %d\n", a /= b);

	printf("Modulus & assign example:\n");
	printf("\t Variable a %%= b; (%d %%= %d)", a, b);
	printf("\t a = %d\n", a %= b);

	return 0;
}
