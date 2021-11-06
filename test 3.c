#include<stdio.h>
#include<string.h>
int main(void)
{
	int myArray[10];
	int largeNum[10]; // declare the arrays
	int x, sum = 0;
	int largecount = 0;
	float avg;
	
	for(x=0; x<10; x++) // get inputs
	{
		printf("Enter number :");
		scanf("%d", &myArray[x]);
		sum = sum + myArray[x];
	}
	puts("");
	printf("Enter the number series :"); // output array
	for(x=0; x<10; x++)
	{
		printf("%d\t", myArray[x]);
	}
	puts("");
	avg = sum/10.0; // find average
	printf("Average : %.2f", avg);
	puts("");	
	printf("myArray :"); // output array
	for(x=0; x<10; x++)
	{
		printf("%d\t", myArray[x]);
		if(myArray[x] > avg)
		{
			largeNum[largecount] = myArray[x];
			largecount++;
		}
	}
	puts("");
	printf("largeNum :"); // find large numbers over average
	for(x=0; x<largecount; x++)
	{
		printf("%d\t", largeNum[x]);
	}

	return 0;
}