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
	printf("enter the roll number of the student");
	scanf("%d",&s1.rno);
	printf("enter the name of the student");
	scanf("%s",&s1.name);
	printf("enter the marks of the student");
	scanf("%f",&s1.marks);
	printf("%d\n%s\n%f",s1.rno,s1.name,s1.marks);
	getch();
	
}
