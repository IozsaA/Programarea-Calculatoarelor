#include<stdio.h>
int main()
{
    int i,j,n,m,a[50],b[50],x;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=",i+1);
        scanf("%d",&*(a+i));
    }
    for (i = 0; i < n; i++)
    {
        printf("b[%d]=",i+1);
        scanf("%d",&*(b+i));
    }
    for(i=0;i<n;i++)
        {
            x=0;
            for(j=0;j<n;j++)
                if(*(a+i)==*(b+j))
                {
                    x=1;
                }
            if(x==0)
            {
                printf(" Vectorii nu contin aceleasi elemente.");
                return 0;
            }
        }
    printf(" Vectorii contin aceleasi elemente.");
    return 0;
}
