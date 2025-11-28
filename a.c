#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a=20;
	int* aptr;
	a=20;
	aptr = &a;
	printf("a=%d",a);
	printf("\nvalue of a=%d",*aptr);
	printf("\naddress of a=%p",&a);
	printf("\naddress of a=%p",aptr);
	getch();
}