#include<stdio.h>
int main()
{
    int ram , shyam , ajay;
    printf("enter the ages:");
    scanf("%d%d%d",&ram ,&shyam, &ajay);
    if (ram<shyam && shyam<ajay)
    {
        printf("ram is youngest");
    }
    if (shyam<ram && shyam<ajay)
    {
        printf("shyam is youngest");
    }
    else if (ajay<shyam && ajay< ram)
    printf("ajay is youngest");
    return 0;
}