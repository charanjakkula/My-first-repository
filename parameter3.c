#include<stdio.h>
void add(int,int);
void main()
{
	int a,b;
	printf("enter the values of a & b");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int x,int y)
{ 
	int z;
	z=x+y;
	printf("the values is %d",z);
	
}