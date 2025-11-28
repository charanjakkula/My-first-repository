#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value");
	scanf("%d",&n);
	i=n;
	do
	{
		printf("%d",i);
		i--;
	}while(i>=1);
	getch();
}