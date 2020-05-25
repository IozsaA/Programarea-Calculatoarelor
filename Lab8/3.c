#include<stdio.h>
int main()
{
    int i,j,n,m,a[10],b[20],v[10][20];
    printf("m=");
    scanf("%d",&m);
    printf("n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i+1);
        scanf("%d",(a+i));
    }
    for(j=0;j<m;j++)
    {
        printf("b[%d]=",j+1);
        scanf("%d",(b+j));
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            v[i][j]=*(a+j)*(*(b+i));
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(&v[0][0]+i*20+j));
        }
        printf("\n");
    }
    return 0;
}
