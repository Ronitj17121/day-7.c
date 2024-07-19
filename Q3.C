#include<stdio.h>
#include<conio.h>

 main()

{
	int A,B,C;
	
	printf("Enter a maths mark :");
	scanf("%d",&A);
	
	printf("Enter a english mark :");
	scanf("%d",&B);
	
	printf("Enter a since mark :");
	scanf("%d",&C);
	
	if (A>100)
	{
		printf("enter valid mark");
	}
	else if(B>100)
	{
		printf("enter valid mark");
		
	}
	else if(C>100)
	{
		printf("enter valid mark");
	
	}
	else if(A<0)
	{
		printf("enter valid mark");
	
	}
	
	else if(B<0)
	{
		printf("enter valid mark");
		
	}
	else if(C<0)
	{
		printf("enter valid mark");
	}
	else
	{
		printf("averge = %d",(A+B+C)/3);
	}
}
