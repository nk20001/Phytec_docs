#include<stdio.h>
int main()
{
    int  year ;
    printf("enter a year");
    scanf("%d", &year);
    if (year % 400 ==0)
    printf("Leap year:%d\n" ,year);
    
    else if ( year % 100 == 0)
     printf("not leap yr :%d\n" , year);
     
     else if (year% 4 == 0)
     printf(" leap yr:%d/n",year);
     else 
     printf("not a leap year:");
     return 0;



}

