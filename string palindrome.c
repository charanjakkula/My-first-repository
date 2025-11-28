#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	char t[100];
	int n;
	printf("enter any string\n");
	gets(a);
	strcpy(t,a);
	strrev(a);
	n=strcmp(t,a);
	if(n==0)
	{
		printf("the given string is palindrome");
	}
	else
	{
		printf("the given string is not a palindrome");
	}
	getch();
	
}