#include<stdio.h>
 int main()
 {
    int v[100],n,y,j,k=0,x=0,a[16],i;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i+1);
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++)
    {
        y=0,x=0,k=0;
        for(j=0;j<16;j++)
            a[i]=0;
        j=0;
        while(v[i]!=0)
        {
            a[j]=v[i]%2;
            v[i]=v[i]/2;
            j++;
        }
        for(j=j-1;j>=0;j--)
        {
            if(a[j]==1)
                k++;
            x=x*10+a[j];
        }
        for(j=0;j<k;j++)
            y=y*10+1;
        printf("%d %d\n",x,y);
    }
 }
