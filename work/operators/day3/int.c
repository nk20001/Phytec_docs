#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter three diff numbers: ");
	scanf("%d%d%d" , &n1, &n2, &n3);
	if (n1>= n1 && n2 >= n3)
	printf("The largest number is:%d\n", n1);
	
	else if (n2>=n1 && n2 >= n3)
	printf("the largest number is %d\n", n2);

	else
		printf(" the largest number is %d\n", n3);
	return 0;
}


