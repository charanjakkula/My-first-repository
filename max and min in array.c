#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,max,min;
	printf("enter the value of n");
	scanf("%d",&n);
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
		max=a[i];
		}
		if(a[i]<min)
		{
		min=a[i];
        }
	}
	printf("the maximum and minimum value %d%d",max,min);
	getch();
}