#include<stdio.h>
 int main()
 {
     int n,aux;
     printf("n=");
     scanf("%d",&n);
     while(n!=0)
     {
     if ((n & (1 << 0))&&(n & (1<<3))&&(n & (1<<7)))
     {
         aux=n;
         aux^=1<<0;
         aux^=1<<3;
         aux^=1<<7;
         printf("%d %d\n",n,aux);
     }
     printf("n=");
     scanf("%d",&n);
    }
 }
