#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p=1,aux=0,k=0;
    printf("n=");
    scanf("%d",&n);
    printf("\n");
    if(n<0)
    {
        n=-n;
        k=1;
    }
    while(n!=0)
    {

        if(n%2==1)
                aux=aux+p;
        p*=10;
        n/=2;
    }
    if(k==0)
        printf("Numarul zecimal transformat in binar are valoarea %u",aux);
     else
         printf("Numarul zecimal transformat in binar are valoarea  -%u",aux);
    return 0;
}
