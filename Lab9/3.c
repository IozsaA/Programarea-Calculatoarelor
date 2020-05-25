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
void init(int a[][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                *(&a[0][0]+i*50+j)=-1;
            }
            printf("\n");
        }
}
void f2(int a [][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j||i+j==n-1)
                *(&a[0][0]+i*50+j)=0;

            }
        }
}
void f3(int a [][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<j&&i+j<n-1)
                    *(&a[0][0]+i*50+j)=1;
            }
        }
}
void f4(int a [][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<j&&i+j>n-1)
                    *(&a[0][0]+i*50+j)=2;
            }
        }
}
void f5(int a [][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>j&&i+j>n-1)
                    *(&a[0][0]+i*50+j)=3;
            }
        }
}
void f6(int a [][100],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>j&&i+j<n-1)
                    *(&a[0][0]+i*50+j)=4;
            }
        }
}
int main()
{
    int i,j,n,m,a[50][100];
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    init(a,n,m);
    f2(a,n,m);
    f3(a,n,m);
    f4(a,n,m);
    f5(a,n,m);
    f6(a,n,m);
    afisare(a,n,m);
    return 0;
}
