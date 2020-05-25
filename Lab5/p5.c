#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;
    printf("n=");
    scanf("%d",&n);
    printf("\n");
    while(n!=0) {
        i++;
         printf("Bitul %d este egal cu %d\n",i,n&0xff);
         n=n>>8;
    }
    return 0;
}
