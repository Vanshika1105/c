#include <stdio.h>
#include <conio.h>

void main()
{
	int r;
	float pi=3.14, area, ci;

	printf("Enter radius of Circle: ");

	scanf("%d",&r);

	area = pi*r*r;

	printf("Area of circle = %f",area);

	ci = 2*pi*r;

	printf("Circumference= %f", ci);

	getch();
}