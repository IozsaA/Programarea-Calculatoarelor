#include<stdio.h>

 int main()
 {
     int n,a[50],b[50],i;
     printf("n=");
     scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         b[i]=a[i]>>4;
     }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
 }
