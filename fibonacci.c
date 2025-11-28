#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a,b,c;
	printf("Enter n: ");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d\t%d",a,b);
	c=a+b;
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
	getch 0;
	return 0;
}