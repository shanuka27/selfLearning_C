#include<stdio.h>
int main()
{
	int boxes[4][3];
	int i,j;
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
		puts("");
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", boxes[i][j]);
		}
		puts("");
	}
	
	return 0;
}