#include<stdio.h>
#include<string.h>
int main()
{
	int intArr[10];
	int positiveNum[10];
	int negativeNum[10];
	int Positive_Count = 0; 
	int Negative_Count = 0;
	int x;
	
	for(x=0; x<10; x++)
	{
		printf("Enter number :");
		scanf("%d", &intArr[x]);
	}
	printf("Number series :");
	for(x=0; x<10; x++)
	{
		printf("%d\t", intArr[x]);
		if(intArr[x]>=0)
		{
		    positiveNum[Positive_Count] = intArr[x] ; 
		    Positive_Count++;
		}
		else
		{
			negativeNum[Negative_Count] = intArr[x];
			Negative_Count++;
		}
	}
	printf("\npositive numbers :");
	for(x=0; x<Positive_Count; x++)
	{
		printf("%d\t", positiveNum[x]);
	}
	printf("\nnegative numbers :");
	for(x=0; x<Negative_Count; x++)
	{
		printf("%d\t", negativeNum[x]);
	}
	return 0;
}