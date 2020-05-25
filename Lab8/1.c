#include<stdio.h>
int main()
{
    int i,j,n,a[100][100],s=0,p=1;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",(&a[0][0]+i*100+j));
            if(*(&a[0][0]+i*100+j)>0)
                s=s+*(&a[0][0]+i*100+j);
            else
                p=p*(*(&a[0][0]+i*100+j));
        }
    }
    printf("Suma este: %d\n",s);
    printf("Produsul este: %d\n",p);
    return 0;
}
