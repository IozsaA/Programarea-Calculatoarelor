#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,m;
    float a[100][100],s,p;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%f",(&a[0][0]+i*100+j));
        }
    }
    for(j=0;j<n;j++)
    {
        s=0;
        for(i=0;i<m;i++)
        {
            s=s+(*(&a[0][0]+j*100+i));
        }
        printf("Media aritmetica pe linia %d este: %f\n",j+1,s/n);
    }
    for(i=0;i<m;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            p=p*(*(&a[0][0]+i*100+j));
        }
        printf("Media geometrica pe coloana %d este: %f\n",i+1,pow(p,1./n));
    }
    return 0;
}
