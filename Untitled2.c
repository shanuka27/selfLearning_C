#include<stdio.h>
int main()
{
	int x = 1;
	while (x<= 10)
	{
		if(x == 3 || x==5)
		{
			x++;
			continue;
		}
		printf("%d", x);
		x++;
	}
	return 0;
}