#include<stdio.h>
int main()
{
    int i,j,n,a[10][10],s=0,p=1;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*10+j));
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j+1==n)
                *(&a[0][0]+i*10+j)= *(&a[0][0]+i*10+j)*( *(&a[0][0]+i*10+i));
            else if(i+j+1<n)
                *(&a[0][0]+i*10+j)= *(&a[0][0]+i*10+j)+ *(&a[0][0]+(n-i-1)*10+(n-j+1));
            else
                a[i][j]=a[n-i+1][n-j-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(&a[0][0]+i*10+j));
        }
        printf("\n");
    }
    return 0;
}
