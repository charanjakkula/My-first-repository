#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char ch;
	printf("enter the values of a,b\n");
	scanf("%d%d",&a,&b);
	printf("MENU\n");
	printf("+\n,-\n,*\n,/\n,%\n");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
		printf("sum value are %d",c);
		break;
		case '-':c=a-b;
		printf("sub value are %d",c);
		break;
		case '*':c=a*b;
		printf("multipication value are %d",c);
		break;
		case '/':c=a/b;
		printf("division value are %d",c);
		break;
		case '%':c=a%b;
		printf("riminder value are %d",c);
	}
	getch();
}