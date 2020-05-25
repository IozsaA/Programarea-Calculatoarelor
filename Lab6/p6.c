#include<stdio.h>
void binar(int num)
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
     int i,j,n,aux,v[20];
     printf("n=");
     scanf("%d",&n);
     for(i=0;i<2*n;i++)
     {
         printf("v[%d]=",i+1);
         scanf("%d",&v[i]);
     }
     for(i=0;i<2*n;i++)
     {
         binar(v[i]);
         printf("\n");
     }
     for(i=0;i<n;i=i+2)
        {

        int mask=32768,k=0;
        while(mask > 0)
            {
            if((v[i] & mask) !=0 )
                k++;
            mask = mask >> 1 ;
            }
        for(j=0;j<k;j++)
            v[i+1]=v[i+1]|1 << j;
        }
    printf("\n");
     for(i=1;i<2*n;i=i+2)
     {
         binar(v[i]);
         printf("\n");
     }
 }
