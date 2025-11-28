#include<conio.h>
#include<stdio.h>
int add();
void main()
{ 
	int c;
	c=add();
	printf("the value is %d",c);
}
void add(int)
{
	int a,b;
	printf("enter the value of a&b");
	scanf("%d%d",&a,&b);
	add()=a+b;
	
	
}