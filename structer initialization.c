#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int rno;
		char name[50];
		float marks;
	};
	struct student s1={56,"charan",9.2};
	printf("%d\n%s\n%f",s1.rno,s1.name,s1.marks);
	getch();
	
}
