#include<stdio.h>
int main()
{
	int num[] = {1,2,6,4};
	int i;
	for(i = 0; i < 4; i++)
    {
    	printf("%d", num[i]);
	}
	for(i = 0; i < 4; i++)
	{
		if(num[0] < num[i])
		{
			num[0] = num[i];
		}
	}
	 printf("%d", num[0]);
	
	return 0;
}