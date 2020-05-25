#include<stdio.h>
int main()
{
    int i,v[8],a=0;
    for(i=0;i<8;i++)
    {
        printf("v[%d]=",i+1);
        scanf("%d",&*(v+i));
    }
    for(i=0;i<8;i++)
    {
        if((*(v+i)&(1<<2))>>2==1)
            a=a|1<<(7-i);
    }
    printf("%d",a);
    return 0;
}
