#include<stdio.h>
#include<conio.h>

void main()
 
{
	int A;
	printf("enter any number:");
	scanf("%d",&A);
	
	
	if(A<0)
	{
		printf("this number is negetive");
	}
	else if(A>0)
	{
		printf("this number is positive");	
	}
	else
	{
		printf("this number is neutral");
	}

}
