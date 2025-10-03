#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;

	printf("Read the integer from keyboard :- ");

	scanf("%d",&x);
	x<<=3;
	y=x;

	printf("nThe left shifted data is = %d",y);

	getch();
}