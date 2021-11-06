#include<stdio.h>
//#include<string.h>
int main()
{
	int number[10];
	int i;
	
	for(i=0; i<10; i++)
    {
     	printf("Enter number :");
		scanf("%d", &number[i]);	
	}
	for(i=0; i<10; i++)
	{
		printf("%d\t", number[i]);
	}
	
	return 0;
}