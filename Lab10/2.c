#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* separator(char *s)
{
    int i,j=0;
    static int v[201];
    for(i=0;i<strlen(s);i++)
    {
        if(*(s+i)>='0'&&*(s+i)<='9')
        {
            while(*(s+i)>='0'&&*(s+i)<='9')
            {
                *(v+j)=10*(*(v+j))+(*(s+i)-'0');
                i++;
            }
            j++;
        }
    }
    *(v+200)=j;
    return v;
}
int suma(int *v)
{
    int i=0,s=0;
    for(i=0;i<*(v+200);i++)
    {
        s+=*(v+i);
    }
    printf("\nSuma este: %d",s);
}
int main()
{
    char s[201];
    int *p,i;
    printf("text= ");
    fgets(s,200,stdin);
    p=separator(s);
    i=0;
    printf("\n");
    printf("Numere sunt: ");
    for(i=0;i<*(p+200);i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    suma(p);
    return 0;
}
