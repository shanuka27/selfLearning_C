#include<stdio.h>
#include <math.h>
int main()
{
	double number1 = 5;
	double number2 = -3;
	double number3;
	
	printf("%f\n", number1);
	printf("%f\n", number2);
	
	number3 = fabs(number2);
	printf("%f", number3);
	return 0;
}