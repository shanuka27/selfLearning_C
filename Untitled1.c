#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter number :");
	scanf("%d", &n);
	
	if(n%2 == 1)
	{
		printf("%d is odd number", n);
	}
	
	if(n%2 == 0)
	{
		printf("%d is even number", n);
	}
	
	return 0;
}