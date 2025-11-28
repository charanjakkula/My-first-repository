#include<stdio.h>
#include<conio.h>
void main()
{
	int u,t,a;
	float s;
	printf("enter the values of u,t,a");
	scanf("%d%d%d",&u,&t,&a);
	s=u*t+1/2*a*t*2;
	printf("the value is %f",s);
	getch();
}