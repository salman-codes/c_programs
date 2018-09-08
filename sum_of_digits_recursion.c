// calculate sum of digits of the 5-digit number
// using recursion.

#include <stdio.h>
#include <conio.h>
int add(int num)
{
	int sum=0;
	if(num==0)
		return(0);
	sum=num%10+add(num/10);
	return(sum);
}
void main()
{
	int c,num;
	clrscr();
	printf("Enter 5-digit number:\n");
	scanf("%d",&num);
	c=add(num);
	printf("Sum of digits is:%d",c);
	getch();
}