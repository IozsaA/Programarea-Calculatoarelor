#include <stdio.h>
#include <math.h>
int main()
{
    int i, j,n,v[50];
    printf("n=");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("v[%d]=",i+1);
        scanf("%d",&*(v+i));
    }
    for (i = 0; i < n; i++){
        if(*(v+i)-*(v+i+1)<10)
        {
            for (j = n; j > i; j--){
            *(v+j) = *(v+j-1);
            }
            if(fabs(*(v+i))>fabs(*(v+i+2)))
                v[i+1] = fabs(*(v+i));
            else
                v[i+1]= fabs(*(v+i+2));

            n++;
            i++;
        }
    }
    for (i = 0; i < n; i++){
        printf("%d ", *(v+i));
    }
    return 0;
}
