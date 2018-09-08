// WAF to swap two integers using:-
// Call by value

#include <stdio.h>
#include <conio.h>
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("Value after swapping\nx=%d y=%d",x,y);
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter two numbers:");
	scanf("%d%d",&x,&y);
	printf("\nValue before swapping:");
	printf("\nx=%d y=%d\n",x,y);
	swap(x,y);
	getch();
}