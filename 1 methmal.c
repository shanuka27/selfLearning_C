#include<stdio.h>
#include<string.h>
int main()
{
	int numArr[6];
	int oddNum[6];
	int evenNum[6];
	int i,oddcount,evencount = 0;

	for(i=0; i<6; i++)
	{
		printf("Enter number :");
		scanf("%d", &numArr[i]);
    }

    //conditions must be inside the for loop
    printf("\nNumber series\t:");
    for(i=0; i<6; i++)
    {
        printf("%d\t", numArr[i]);
        if(numArr[i] % 2 == 0)
        {
            numArr[i] = evenNum[i];
            evenNum[/*i*/evencount++] = numArr[i];
        }
        else
        {
            numArr[i] = oddNum[i];
            oddNum[/*i*/oddcount++] = numArr[i];
        }
    }

    printf("\nEven numbers\t:");
    for(i=0; i<evencount; i++)
    {
        printf("%d\t", evenNum[i]);
    }


    printf("\nOdd numbers\t:");
    for(i=0; i<oddcount; i++)
    {
        printf("%d\t", oddNum[i]);
    }

    printf("\n");
	return 0;
}