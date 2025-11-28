#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int u,s,a;
	float v;
	printf("enter the values of u,s,a");
	scanf("%d%d%d",&u,&s,&a);
	v=sqrt(u*2+2*a*s);
	printf("the value is %f",v);
	getch();
}