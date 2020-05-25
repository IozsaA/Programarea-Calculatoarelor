#include<stdio.h>
int citire(int a[][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*50+j));
        }
}
int afisare(int a[][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",*(&a[0][0]+i*50+j));
            }
            printf("\n");
        }
}
int main()
{
    int i,j,n,m,a[50][100];
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    citire(a,n,m);
    afisare(a,n,m);
    return 0;
}
