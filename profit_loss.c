#include<stdio.h>
int main()
{
    int  cp, sp;
    int  p , l ;
    printf("enter the cost price and selling price");
    scanf("%d%d", &cp, &sp);
    if (sp < cp)
    printf("profit is made:%d\n" ,(sp-cp));
    
    else if ( sp < cp)
     printf("loss :%d\n" , (cp -cp));
     
     else 
     printf(" no p / l");
     return 0;



}

