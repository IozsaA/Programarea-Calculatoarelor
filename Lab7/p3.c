#include<stdio.h>
int main()
{
int i,n,v[200],a[200],b[200],c[200],k1=0,k2=0;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("v[%d]=",i+1);
    scanf("%d",&*(v+i));
    if(*(v+i)%2==0)
    {
        *(a+k1)=*(v+i);
        k1++;
    }
    else
    {
        *(b+k2)=*(v+i);
        k2++;
    }
}

for(i=0;i<n;i=i+2)
{
    *(c+i)=*(b+i/2);
    *(c+i+1)=*(a+i/2);
}

printf("\nNumerele impare sunt:\n");
for(i=0;i<k2;i++)
{
    printf("%d ",*(b+i));
}

printf("\nNumerele pare sunt:\n");
for(i=0;i<k1;i++)
{
    printf("%d ",*(a+i));
}

printf("\nNumerele intercalate sunt:\n");
for(i=0;i<n;i++)
{
    printf("%d ",*(c+i));
}
return 0;
}
