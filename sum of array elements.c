#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,sum;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the values of array a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("the array elements are \n");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum array elements is ",sum);
	getch();
}