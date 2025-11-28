#include<stdio.h>
int main()
{
	int ch,i,j;
	printf("Enter any character: ");
	scanf("%c",&ch);
	for(i=1;i<=ch;i++)
	{
		printf("ch");
	}
	for(j=i;j>=ch;j++)
	{
		printf("%c",j);
	}
	return 0;
}