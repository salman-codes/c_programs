/******************************************************************************

                C Programms to Conduct Elections
                       Using Ballet Paper
*******************************************************************************/

#include <stdio.h>
// #include <conio.h>

void main()
{
	int count1=0, count2=0, count3=0, count4=0, count5=0, nota=0;
	int x[30],i,j,k,m;
	// clrscr();
	printf("Enter the number of voters:");
	scanf("%d",&m);
	for(i=1;i<=5;i++)
	{
		printf("\nBallet number for %d candidate:",i);
		scanf("%d",&k);
	}
	printf("Casting of Votes_ _ _ _ _ _ ");
	for(j=0;j<m;j++)
	{
		printf("\nPerson %d voted:",j);
		scanf("%d",&x[j]);
	}
	for(j=0;j<m;j++)
	{
		if(x[j]==1)
			count1++;
		if(x[j]==2)
			count2++;
		if(x[j]==3)
			count3++;
		if(x[j]==4)
			count4++;
		if(x[j]==5)
			count5++;
		else
			nota++;
	}
	printf("No. of votes in ballet %d:%d",k,count1);
	printf("No. of votes in ballet %d:%d",k,count2);
	printf("No. of votes in ballet %d:%d",k,count3);
	printf("No. of votes in ballet %d:%d",k,count4);
	printf("No. of votes in ballet %d:%d",k,count5);
	printf("No. of votes in NOTA      %d",nota);
	// getch();
}