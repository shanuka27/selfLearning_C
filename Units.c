#include<stdio.h>
int main() 
{
	int units[3][4] = {0};
	int i,j;
	int max,cusID = 0,month = 0;
	for(i=0; i<3; i++)
	{
		printf("Details of customer ID %d\n", i+1);
		for(j=0; j<4; j++)
		{
			printf("Enter number of electricity in month %d :", j+1);
			scanf("%d", &units[i][j]);
		}
		puts("");
	}
	max = units[0][0];
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			if(units[i][j] > max)
			{
				max = units[i][j];
				cusID = i + 1;
				month = j + 1;
			}
		}	
	}
	puts("");
	printf("maximum number of electricity unit is %d\n", max);
	printf("month is %d & customer Id is %d", month,cusID);
	return 0;
}