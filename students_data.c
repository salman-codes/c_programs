// WAF to print the data of a student whose roill no. is given

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
	int i,r;
	clrscr();
	printf("Displaying Information of Students\n");
	names(struct student s[3]);
	printf("Enter roll number:");
	scanf("%d",&r);
	for(i=0;i<3;i++)
	{
		if(r==s[i].rno)
		printf("%s of %s joined in %s",s[i].name,s[i].course,s[i].year);
	}
	getch();
}