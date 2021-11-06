#include<stdio.h>
float calcIncrement(float salary, int noofYearsWorked);
float calcTotsalary(float salary, float increment);
int main(void)
{
	float salary,total_salary,increment1;
	int years;
	
	printf("Enter salary :");
	scanf("%f", &salary);
	
	printf("\nEnter no of years :");
	scanf("%d", &years);
	
	increment1 = calcIncrement(salary, years);
	
	total_salary = calcTotsalary(salary, increment1);
	
	printf("\nIncrement : %f", increment1);
	
	printf("\nTotal salary : %f", total_salary);
	
	return 0;
}
float calcIncrement(float salary, int noofYearsWorked)
{
	float increment,salary1;
	int year;
	if(year>2)
		increment = salary1*0.1;
	else
		increment = 0;
		
	return increment;		
}
float calcTotsalary(float salary, float increment)
{
	float salary2,increment2,totalsalary;
	
	totalsalary = salary2 + increment2;
	
	return totalsalary;
}