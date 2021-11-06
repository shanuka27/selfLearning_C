#include<stdio.h>

int main()
{
	int x,y,z;
	
	printf("Enter number1 : ");
	scanf("%d", &x);
	
	printf("Enter number2 : ");
	scanf("%d", &y);
	
	printf("Enter number3 : ");
	scanf("%d", &z);
	
	if (x>y)
	{
		printf("%d is the highest number\n", x);	
	}	
	
	else if(y>x) 
	{
		printf("%d is the highest number\n", y);
	}
	
	else if(x>z)
	{
		printf("%d is the highest number\n", x);
	}
	
	else if (z>x)
	{
		printf("%d is the highest number", z);
	}
	
	else if(y>z)
	{
		printf("%d is the highest number", y);
	}
	else if(z>y)
	{
		printf("%d is the highest number", z);
	}
	else
	{
		printf(" ");
	}
	
	return 0;
	
}