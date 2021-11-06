#include<stdio.h>
int main()
{
	int x,y,z;
	
	for (x=1;x<=5;x++)//row
	{
		for(y=1;y<=x;y++)//colllum
		{
			printf("*");
		}
			printf("\n");
	}
	
	for (x=1;x<=6;x++)//row
	{
		for(z=6;z>=x;z--)//collum
		{
			printf("*");
		}
			printf("\n");
	}
	
	return 0;
}