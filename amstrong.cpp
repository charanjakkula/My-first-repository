#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,s=0,t;
	printf("enter the value");
	scanf("%d",&n);
	t=s;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
		
	}
	printf("the amstrong is %d",s);
	getch();
}