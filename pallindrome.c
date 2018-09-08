// WAP to find whether the given number is pallandrome or not.

#include <stdio.h>
#include <conio.h>
void pallend(long int num)
{
	long int r=0,m,n;
	n=num;
	while(n!=0)
	{
		m=n%10;
		r=r*10+m;
		n/=10;
	}
	if(r==num)
		printf("%d is a pallandrome",num);
	else
		printf("%d is not a pallandrome",num);
}
void main()
{
	int c,n,num;
	clrscr();
	printf("Enter value of num:");
	scanf("%d",&num);
	pallend(num);
	getch();
}