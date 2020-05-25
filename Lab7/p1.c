#include<stdio.h>
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
 unsigned n,s=0;
 while(n!=0)
 {
     printf("n=");
    scanf("%u",&n);
     s=s+countSetBits(n);
 }
 if(s%2==0)
    printf("*par*");
 else
    printf("*impar*");
return 0;
}
