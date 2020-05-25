#include<stdio.h>
void citire(int a[][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*50+j));
        }
}
void invers(int a[][100],int n)
{
    int i,j,aux;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
            {
                aux=*(&a[0][0]+i*50+j);
                *(&a[0][0]+i*50+j)=*(&a[0][0]+i*50+(n-j));
                *(&a[0][0]+i*50+(n-j))=aux;
            }
        }
}
void afisare(int a[][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
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
    int i,j,n,a[50][100];
    printf("n=");
    scanf("%d",&n);
    citire(a,n);
    afisare(a,n);
    printf("\n");
    invers(a,n);
    afisare(a,n);
    return 0;
}
