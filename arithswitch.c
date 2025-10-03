#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,n,s,m,su,d;

	printf("Enter two Numbers: ");
	scanf("%d%d",&a,&b);
	printf("Enter 1 for sumn 2 for multiplyn 3 for subtractionn 4 for divison: ");
	scanf("%d",&n);

	switch(n)
	{
	case 1:
	s = a+b;
	printf("sum=%d",s);
	break;
	case 2:
	m = a*b;
	printf("multiply=%d",m);
	break;
	case 3:
	su = a-b;
	printf("subtraction=%d",su);
	break;
	case 4:
	d = a/b;
	printf("division=%d",d);
	break;
	default:
	printf("Wrong input");
	break;
	}

	getch();
}