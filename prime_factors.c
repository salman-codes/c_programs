// A positive number is entered through the keyboard. WAF to obtain the prime factors of this number.
#include <stdio.h>
#include <conio.h>
void factor(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%4d",i);
			n=n/i;
			i--;
			if(n==1)
			break;
		}
	}
}
void main()
{
	int n,i;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\n Prime factors of %d are:\n",n);
	factor(n);
	getch();
}