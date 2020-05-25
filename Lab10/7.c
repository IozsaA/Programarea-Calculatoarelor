#include <stdio.h>
#include <stdlib.h>
void afisare(char s[200][41],int n)
{
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        if(strlen(s[i])>k)
            k=strlen(*(s+i));
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
            if(s[j][i]!=0)
                printf("%c",s[j][i]);
            else
                printf(" ");
        printf("\n");
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
