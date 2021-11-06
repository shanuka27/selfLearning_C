#include<stdio.h>
int main()
{
	// declare arrays 
	int boxes[4][3]; 
	int volume[4];
	// declare variables
	int i,j; 
	
	// get keyboard inputs
	for(i = 0; i < 4; i++)
	{		
		for(j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				printf("Enter length :");
			    scanf("%d", &boxes[i][j]);				
			}
			if(j == 1)
			{
				printf("Enter width :");
			    scanf("%d", &boxes[i][j]);				
			}
			if(j == 2)
			{
				printf("Enter height :");
			    scanf("%d", &boxes[i][j]);				
			}			
		}
		puts(""); // line break
	}
	// print volumes
	for(i = 0; i < 4; i++)
	{
		int j = 0;		
		volume[i] = boxes[i][j] * boxes[i][j+1] * boxes[i][j+2];
		printf("%d", volume[i]);
		puts("");
	}	
	return 0;
}   // end 