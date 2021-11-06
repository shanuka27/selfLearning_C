#include<stdio.h>
#include<string.h>
int main()
{
	int numArr[6];
	int oddNum[6];
	int evenNum[6];
	int i;
	int oddcount = 0;
	int evencount = 0;
	
	for(i=0; i<6; i++)
	{
		printf("Enter number :");
		scanf("%d", &numArr[i]);
    }
    	printf("\nNumber series :");
		for(i=0; i<6; i++)
	    {
			printf("%d\t", numArr[i]);		
		    if(numArr[i] % 2 == 0)
			{	
				evenNum[evencount] = numArr[i];	
				evencount++; 	
	    	}
	    	else
	    	{
	    		oddNum[oddcount] = numArr[i];
				oddcount++;	
			}
		}
		puts("");		
	    printf("\nEven numbers :");
	    for(i=0; i<evencount; i++)
	    {
	   	    printf("%d\t", evenNum[i]); 	
		}
		puts("");
		printf("\nOdd numbers :");
		for(i=0; i<oddcount; i++)
		{
			printf("%d\t", oddNum[i]);	
		}	       	    	      	    				 	
	return 0;
}