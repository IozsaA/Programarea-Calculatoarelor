#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void afisare(char*s)
{
    int i,j,k;
    for(i=0;i<strlen(s)-1;i++)
    {
        k=0;
        for(j=i+1;j<strlen(s);j++)
            if(*(s+i)==*(s+j))
            {
                k++;
                *(s+j)=" ";
            }

        if(k==0&&((*(s+i)>='A'&&*(s+i)<='Z')||(*(s+i)>='a'&&*(s+i)<='z')))
            printf("%c",*(s+i));
    }
}
int main()
{
    char s[201];
    int i=0,n;
    printf("text=");
    fgets(s,200,stdin);
    afisare(s);
    return 0;
}
