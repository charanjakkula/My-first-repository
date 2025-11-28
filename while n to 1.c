#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("%d",i);
		i--;
	}
	getch();
}