#include<stdio.h>
int main()
{
    int i,j,n,a[255][255],s=0,p=1;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*255+j));
            if((i+j)%2==0)
                *(&a[0][0]+i*255+j)=0;
            else if((i+j)%2==1&&*(&a[0][0]+i*255+j)%2==1)
                *(&a[0][0]+i*255+j)=1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(&a[0][0]+i*255+j));
        }
        printf("\n");
    }
    return 0;
}
