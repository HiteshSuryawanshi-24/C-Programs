//Program 3.C Program to Check Even Or Odd No
#include<stdio.h>
#include<conio.h>
void main()
{
	char choice;
	int n;
	clrscr();
	printf("\nWelcome C Program for Even Or Odd Developed by Hitesh!!\n");
	printf("\nEnter Any No to check even Or odd:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\nEven No !!");
	}
	else
	{
		printf("\nOdd No !!");
	}
	getch();
}