#include<stdio.h>
int main()
{
    int i,j,n,m,a[50],b[50],c[100],k=0,p;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=",i+1);
        scanf("%d",&*(a+i));
    }
    for (i = 0; i < m; i++)
    {
        printf("b[%d]=",i+1);
        scanf("%d",&*(b+i));
    }
    i=0;j=0;
    while(i < n && j < m)
    {
        if(*(a+i)<*(b+j))
        {
            *(c+k)=*(a+i);
            i++;
        }
        else
        {
            *(c+k)=*(b+j);
            j++;
        }
        k++;

    }
     if(i<=n)
    {
        for(p=i;p<n; p++)
        {
            *(c+k) = a[p];
            k++;
        }
    }
    if(j<=m)
    {
        for(p=j;p<m;p++)
        {
            *(c+k) = *(b+p);
            k++;
        }
    }
    for (i=0;i<k;i++)
    {
        printf("%d ",*(c+i));
    }
    return 0;
}
