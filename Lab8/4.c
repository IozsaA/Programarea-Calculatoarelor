#include<stdio.h>
int main()
{
    int i,j,m,a[50][50],s=0,p=1;
    printf("m=");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*50+j));
            *(&a[0][0]+i*50+j)=*(&a[0][0]+i*50+j)+i+j;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",*(&a[0][0]+i*50+j));
        }
        printf("\n");
    }
    return 0;
}
