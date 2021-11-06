#include<stdio.h>
#include<string.h>
int main()
{
	int intArr[10];
	int positiveNum[10];
	int negativeNum[10];
	int positivecount = 0;
	int negativecount = 0;
	int x;
	
	for(x=0; x<10; x++)
	{
		printf("Enter number :");
		scanf("%d", &intArr[x]);
	}
	puts("");
	printf("Number series :");
	for(x=0; x<10; x++)
	{
		printf("%d\t", intArr[x]);
		if(intArr[x]>=0)
		{
			positiveNum[positivecount] = intArr[x] ; 
			positivecount++;
		}
		else
		{
			negativeNum[negativecount] = intArr[x];
			negativecount++;
		}
	}
	puts("");
	printf("\npositive numbers :");
	for(x=0; x<positivecount; x++)
	{
		printf("%d\t", positiveNum[x]);
	}
	puts("");
	printf("\nnegative numbers :");
	for(x=0; x<negativecount; x++)
	{
		printf("%d\t", negativeNum[x]);
	}
	return 0;
}