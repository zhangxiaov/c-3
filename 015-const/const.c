#include <stdio.h>

int main()
{
	const float PI = 3.141593;
	int diameter;
	float radius, circ, area;

	printf("\nEnter the diameter of a circle in millimeters: ");
	scanf("%d", &diameter);

	circ = (float) PI * diameter;
	radius = (float ) diameter / 2;
	area = (float) PI * (radius * radius);

	printf("\tIts circumference is %.2f mm\n", circ);
	printf("\tAnd its area is %.2f sq.mm\n", area);

	return 0;
}
