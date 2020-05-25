#include<stdio.h>
int main()
{
    unsigned int i,j,k,n,a[16][16];
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*16+j));
            if(i<j)
                {
                    for(k=0;k<=i;k++)
                        *(&a[0][0]+i*16+j)=*(&a[0][0]+i*16+j)| (1<<k);
                    for(k=i;k<j;k++)
                        *(&a[0][0]+i*16+j)=*(&a[0][0]+i*16+j)^ (1<<k);
                    for(k=j;k< 4*sizeof(unsigned int);k++)
                        *(&a[0][0]+i*16+j)=*(&a[0][0]+i*16+j)& ~(1<<k);

                }
            else
                {
                for(k=0;k<=j;k++)
                    *(&a[0][0]+i*16+j)=*(&a[0][0]+i*16+j)| (1<<k);
                for(k=j;k<i;k++)
                    *(&a[0][0]+i*16+j)=*(&a[0][0]+i*16+j)| (1<<k);
                for(k=i;k< 4*sizeof(unsigned int);k++)
                    *(&a[0][0]+i*16+j)=*(&a[0][0]+i*16+j)& ~(1<<k);
                }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*(&a[0][0]+i*16+j));
        }
        printf("\n");
    }
    return 0;
}
