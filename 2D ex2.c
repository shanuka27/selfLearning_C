#include<stdio.h>
int main()
{
	// declare arrays
	int rainfall[3][4];
	int maxRainfall[3];
	// declare variables
	int i,j,max = 0;
	
	// get keyboard inputs
	for(i = 0; i < 3; i++)
	{
		printf("Day %d\n", i + 1);
		for(j = 0; j < 4; j++)
		{
			if(j == 0)
			{
				printf("Enter city 1 rainfall :");
				scanf("%d", &rainfall[i][j]);
			}
			if(j == 1)
			{
				printf("Enter city 2 rainfall :");
				scanf("%d", &rainfall[i][j]);
			}
			if(j == 2)
			{
				printf("Enter city 3 rainfall :");
				scanf("%d", &rainfall[i][j]);
			}
			if(j == 3)
			{
				printf("Enter city 4 rainfall :");
				scanf("%d", &rainfall[i][j]);
			}									
		}
		puts(""); // line break
	}
	// check the lagest element 
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			max= rainfall[i][0];
			if(max < rainfall[i][j])
			{
				max = rainfall[i][j];
				maxRainfall[i] = max;
						
			}
		}
		printf("%d\n", maxRainfall[i]);	// print the array		
	}	
	return 0;
} // end