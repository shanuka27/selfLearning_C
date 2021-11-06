#include<stdio.h>
int main()
{
	int number[2][3] = {{1,2,3},{4,5,6}};
	int i,j;
	
/*	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter number :");
			scanf("%d", &number[i][j]);
		}
		puts("");
	}*/
	printf("1st\t2nd\t3rd\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", number[i][j]);
		}
		puts("");
	}
	return 0;
}