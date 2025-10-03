#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;

	printf("Enter value for a and b: ");
	
	scanf("%d%d",&a,&b);

	(a>b)?printf("a is greater than b"):printf("b is greater than a");

	getch();
}