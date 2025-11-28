#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter the value of a\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("a is even %d\n");
    }
    else
	{
    	printf("a is odd");
	}
	getch();
}