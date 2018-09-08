// Swap two numbers Call by reference

#include <stdio.h>
#include <conio.h>
void swap(int *p1, int *p2)
{
	int z;
	z=*p1;
	*p1=*p2;
	*p2=z;
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter two numbers:");
	scanf("%d%d",&x,&y);
	printf("\nValue before swapping:");
	printf("\nx=%d y=%d\n",x,y);
	swap(&x,&y);
	printf("\nValue after swapping:");
	printf("\nx=%d y=%d",x,y);
	getch();
}