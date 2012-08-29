#include <stdio.h>

int main()
{
	char letter;
	printf("Enter any single character: ");
	scanf("%c", &letter);

	switch (letter) {
		case 'a':
		case 'b':
		case 'c':
			printf("The letter '%c' was found\n", letter);
			break;
		default:
			printf("The letter is not a, b or c\n");
	}
	return 0;
}
