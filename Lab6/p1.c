#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v[30],i,j;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i+1);
        scanf("%d",&v[i]);
    }
    for (i = 0; i < n; i++){
        if(v[i]==0)
        {

        for (j = n; j > i; j--){
            v[j+1] = v[j];
        }
        v[i+1] = 1;
        n++;
        i++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}
