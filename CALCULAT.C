#include<stdio.h>
#include<conio.h>
void main()
{
	int Ono,No1,No2,result;
	clrscr();
	printf("\nWelcome to Arithmatic Operation Program in C Developed by Hitesh!!");
	printf("\n***CALCULATOR***\n");
	printf("\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT");

	printf("\n\nEnter the Operation No: ");
	scanf("%d",&Ono);
	if(Ono<=5)
	{
		printf("\nEnter the First No:");
		scanf("%d",&No1);
		printf("\nEnter the Second No:");
		scanf("%d",&No2);
	}
	else
	{
		printf("\nEnter Valid Operation No");
	}
	switch(Ono)
	{
		case 1:
			result=No1+No2;
			printf("\nAddition: %d",result);
			break;
		case 2:
			result=No1-No2;
			printf("\nSubstraction: %d",result);
			break;
		case 3:
			result=No1*No2;
			printf("\nMultiplication: %d",result);
			break;
		case 4:
			result=No1/No2;
			printf("\nDivision: %d",result);
			break;
		case 5:
			printf("\nThank you for Visiting!");
			break;
		default:
			printf("\n");
			break;
	}
	getch();
}