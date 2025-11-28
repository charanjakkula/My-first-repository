#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int b,a,d,c;
	float r1,r2;
	printf("enter the values of b,a,c");
	scanf("%d%d%d",&b,&a,&c);
	d=sqrt(b*b)-(4*a*c);
	if(d>=0)
	{
		r1=(-b+d)/2*a;
		r2=(-b-d)/2*a;
		printf("the result is %f%f",r1,r2);
	}
	else
	{
		printf("roots are imaginary");
	}
	getch();
}