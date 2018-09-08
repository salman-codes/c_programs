//Program to calculate the factorial of any integer entered through the keyboard using function.

#include <stdio.h>
#include <conio.h>
void fact(int n)
{
	long int i,fact=1;
	for(i=n;i>=1;i--)
		fact=fact*i;
	printf("\n Factorial is:%ld",fact);
}
void main()
{
	int n;
	clrscr();
	printf("\n Enter the number: ");
	scanf("%d",&n);
	fact(n);
	getch();
}