#include <stdio.h>
#include <math.h>
int decimalToOctal(int n)
{
    int x = 0, p = 1;
    while (n != 0)
    {
    	x=x+(n%8)*p;
    	n=n/8;
        p=p*10;
    }
    return x;
}
void binary(int num)
{
unsigned int mask=32768;

while(mask > 0)
   {
   if((num & mask) == 0 )
         printf("0");
   else
         printf("1");
  mask = mask >> 1 ;
   }
}
int main()
{
    int i,n,v[25];
    printf("n=");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("v[%d]=",i+1);
        scanf("%d", &v[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d %X ",v[i],decimalToOctal(v[i]),v[i]);
        binary(v[i]);
        printf("\n");
    }
    return 0;
}
