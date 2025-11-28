#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++);
		{
			printf("enter the values of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the 2d format is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}