#include<stdio.h>
int main()
{
	int n,f,i;
	f=i=1;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("the factorial for %d is : %d",n,f);
}

