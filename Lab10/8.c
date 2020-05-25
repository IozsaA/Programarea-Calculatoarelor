#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char *str)
{
    int i = strlen(str) - 1, j = 0;
    char ch;
    while (i > j)
    {
        ch = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = ch;
        i--;
        j++;
    }
    return str;
}
void afisare(char s[200][41],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s\n",reverse(*(s+i)));
    }
}
int main()
{
    char s[200][41];
    int i=0,n;
    printf("n=");scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("s[%d]=",i+1);
        scanf("%s",(s+i));
    }
    afisare(s,n);
    return 0;
}
