#include<stdio.h>
#include<trig.h>
int main()
{
        int p, b, h,y,z;
        printf(" enter an input\n");
        scanf("%d%d%d",&p,&b,&h);
        /*x=cose(b,h);*/
        y=sine(p,h);
        z=tane(p,b);
        /*printf("cose of two sides:%d\n",x);*/
        printf("sine of two sides:%d\n",y);
        printf("tane of two sides:%d\n",z);
        return 0;
}

