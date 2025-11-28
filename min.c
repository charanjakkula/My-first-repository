#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a, b, c;
	printf("Enter any three number:", a, b, c);
	scanf("%d %d %d",&a, &b, &c);
	
	if(a<b && a<c)
	printf("%d is minimum",a);
	else if(b<c)
	printf("%d is minimum",b);
	else
	printf("%d is minimum",c);
	getch();
}