#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100]="charan";
	char b[100]="jakkula";
	printf("%s%s\n",a,b);
	int n;
	n=strcmp(b,a);
	printf("%d\n",n);
	getch();
}