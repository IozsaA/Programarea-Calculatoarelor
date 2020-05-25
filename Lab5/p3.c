#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    unsigned n,k=0,p;
    printf("x=");
    scanf("%d",&x);
    printf("n=");
    scanf("%d",&n);
    if(x<0)
    {
        x=-x;
        k=1;
    }
    for(unsigned i=0;i<n;i++)
      x=x|1 << i;
    k=0;
    p=1;
    if(k==0)
        {
            printf("Numarul in zecimal este=%d\n",x);
            while(x!=0)
            {
                if(x%2==1)
                 k=k+p;
                p*=10;
                x/=2;
            }
            printf("Numarul in binar este=%d",k); 
        }
    else
        {
            printf("Numarul in zecimal este=-%d\n",x);
            while(x!=0)
            {
                if(x%2==1)
                 k=k+p;
                p*=10;
                x/=2;
            }
            printf("Numarul in binar este=%d",k); 
        }
    return 0;
}
