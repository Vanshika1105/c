#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b;

	printf("Enter value for a and b: ");
	scanf("%d%d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping the values of a and b: %d %d",a,b);

	getch();
}