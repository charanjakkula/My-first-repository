#include<stdio.h>
 int add(int,int);
 void main()
 {
 	int a,b,c;
 	printf("enter the values of a&b");
 	scanf("%d%d",&a,&b);
 	c=add(a,b);
 	printf("the value is %d",c);
 }
 int add(int x,int y)
 {
 	int z;
 	z=x+y;
 	return z;
 }