#include<stdio.h>
int main()
{
unsigned i,n,v[20];
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("v[%d]=",i+1);
    scanf("%d",&*(v+i));
}
for(i=0;i<n;i++)
{
    if(*(v+i)%2==0)
        *(v+i)=*(v+i)|0xffffff00;
    printf("%u ",*(v+i));
}
return 0;
}
