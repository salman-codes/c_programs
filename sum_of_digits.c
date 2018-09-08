// 5-digit integer is entered through the keyboard. WAF to calculate sum of digits of the 5-digit number
// without using recursion.

#include <stdio.h>
#include <conio.h>
int add()
{
	static int sum=0;
	int num;
	printf("Enter a 5-digit number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	return(sum);
}
void main()
{
	int c;
	clrscr();
	c=add();
	printf("Sum of its digits is:%d",c);
	getch();
}