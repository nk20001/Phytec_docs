#include<stdio.h>
#include<math.h>

int main()
{
	float  a, b,c;
       float x1 , x2;

      printf("enter three numbers:\n");
      scanf("%f%f%f\n",&a,&b,&c);
      
      x1 = (-b + sqrt(b*b-4*a*c))/2*a;
      x2 = (-b - sqrt(b*b-4*a*c))/2*a;

      printf(" the result x1 is : %f" , x1);
      printf(" the result x2 is : %f" , x2);
}

