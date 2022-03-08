//Program for Check Given No is Prime Or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=1;
	clrscr();
	printf("\nEnter Any No to check Prime or Not:");
	scanf("%d",&n);
	if(n==1)
	{
		flag=1;
	}
	else
	{
		for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("\nNo is Prime!!");
	}
	else
	{
		printf("\nNo is Not Prime!!");
	}
	getch();
}
