#include<stdio.h>
int main ()
{
	int num1, num2, res;
	printf("enter the value for two numbers:");
	scanf("%d %d", &num1, &num2);
	res =sum(num1, num2);
	printf("and the result is: ");
	return (0);
}
int add(int num1, int num2)
{
	int num3;
	num3=num1+num2;
	return (num3);
}
