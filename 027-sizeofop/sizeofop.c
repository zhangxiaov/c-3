#include <stdio.h>

struct person {
	char name[50];
	int age;
	float height;
};

int main()
{
	int num = 1234567890;
	float dec = 0.123456;
	double ext = 0.123456789;
	char ltr = 'A';
	char str[] = "Something to write home about...";
	struct person boy;

	printf("Size of num int is %ld bytes\n",    sizeof num);
	printf("Size of dec float is %ld bytes\n",  sizeof dec);
	printf("Size of ext double is %ld bytes\n", sizeof ext);
	printf("Size of ltr char is %ld byte\n",    sizeof ltr);
	printf("Size of str string is %ld bytes\n", sizeof str);
	printf("Size of boy struct is %ld bytes\n", sizeof boy);

	return 0;
}
