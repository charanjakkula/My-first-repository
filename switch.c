#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int ch;
	printf("enter the values of a,b\n");
	scanf("%d%d",&a,&b);
	printf("MENU\n");
	printf("1.addition\n,2.subtraction\n,3.multiplication\n,4.divisin\n,5.riminder\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:c=a+b;
		printf("sum value are %d",c);
		break;
		case 2:c=a-b;
		printf("sub value are %d",c);
		break;
		case 3:c=a*b;
		printf("multipication value are %d",c);
		break;
		case 4:c=a/b;
		printf("division value are %d",c);
		break;
		case 5:c=a%b;
		printf("riminder value are %d",c);
		default:printf("invalid number");
	}
	getch();
}