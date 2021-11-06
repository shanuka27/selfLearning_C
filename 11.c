# include <stdio.h>
#include<math.h>
# include <assert.h>
char grade(int marks); 
void testgrade();
int main(void )
{
	testgrade();
	int x;
	char final;
	printf("Pls enter mark:");
	scanf("%d", &x);
	final = grade(x);
	printf("the grade is %c", final);
}
char grade(int marks) 
{
	char result;
	if (marks < 0)
	result = 'X';
	if (marks < 40)
	result = 'F';
	else if (marks < 60)
	result = 'C';
	else if (marks < 75)
	result = 'B';
	else if (marks <= 100)
	result = 'A';
	else
	result = 'X'; // Error (invalid mark)
	return result;
}
void testgrade()
{
	assert(grade(70)=='B');
	assert(grade(20)=='F');
}
