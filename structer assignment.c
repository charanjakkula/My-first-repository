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
	struct student s1;
	s1.rno=56;
	strcpy(s1.name,"charan");
	s1.marks=9.2;
	printf("%d\n%s\n%f",s1.rno,s1.name,s1.marks);
	getch();
	
}
