#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("\n");
    n=n^0xff0000;
    printf("n=%d",n);
    return 0;

}
