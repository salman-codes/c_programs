// WAF power(a,b) to calculate the value of a raised to b.
#include <stdio.h>
#include <conio.h>
int power(int a,int b)
{
	int i,c;
	c=a;
	for(i=1;i<b;i++)
		c=c*a;
	return(c);

}
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	c=power(a,b);
	printf("answer is:%d",c);
	getch();
}