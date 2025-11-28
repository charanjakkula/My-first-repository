#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	getch();
}