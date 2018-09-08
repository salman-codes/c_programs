#include <stdio.h>
#include <conio.h>
int factorial(int n)
{
	if(n==1)
		return(1);
	else
		return(n*factorial(n-1));
}
void main()
{
	int i;
	clrscr();
	for(i=1; i<=7; i++)
		printf("Factorial of %d: %d\n",i,factorial(i));
	getch();
}
