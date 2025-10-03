#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,b=1,c=0,i;

	printf("%dt%dt",a,b);

	for(i=0;i<=10;i++)
	{
		c = a+b;
		if(c<100)
		{
			printf("%dt",c);
		}

		a=b;
		b=c;
	}

	getch();
}
