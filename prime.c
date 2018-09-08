#include <stdio.h>
#include <conio.h>
#include <math.h>
int prime(int n)
{
	int i,flag=1;
	for(i=2; i<sqrt(n); i++)
		if(n%i==0)
		{
			flag=0;
			break;
		}
	if(flag==1)
		return(1);
	else
		return(0);
}
void main()
{
	int n;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&n);
	printf("1 for prime and 0 for non-prime: %d",prime(n));
	getch();
}
