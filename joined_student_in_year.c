// Create a structure to specify data of students given below:- Roll number, Name, Course, Year of joining
// Assume that there are 10 students in the class:
// WAF to print names of all students who joined in a particular year.

#include <stdio.h>
#include <conio.h>
struct student
{
	int rno;
	char name[20];
	char course[20];
	int year;
};
void names(struct student s[3])
{
	int i;
	printf("Enter information of students:\n");
	for(i=0;i<3;i++)
	{
		s[i].rno=i+1;
		printf("For roll number %d\n",s[i].rno);
		printf("Enter name:");
		scanf("%s",s[i].name);
		printf("Enter course:");
		scanf("%s",s[i].course);
		printf("Enter year of joining:");
		scanf("%s",s[i].year);
	}
}
void main()
{
	int i,y;
	clrscr();
	printf("Displaying Information of Students\n");
	names(struct student s[3]);
	printf("Enter year of joining:");
	scanf("%d",&y);
	for(i=0;i<3;i++)
	{
		if(y==s[i].year)
		printf("%s of %s has roll no. %d",s[i].name,s[i].course,s[i].rno);
	}
	getch();
}