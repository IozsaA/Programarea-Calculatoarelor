#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void afisare(char*s,int n)
{
    int i,j,k;
    for(i=0;i<strlen(s)-1;i++)
    {
        k=0;
        while(strchr(" .,;:\n\t",s[i])==0&&k<n)
        {
            printf("%c",*(s+i+k));
            k++;
        }
        i+=k;
        if(strchr(" .,;:",*(s+i+1)))
            printf("%c",*(s+i+1));
        if(*(s+i+1)=='\\'&&(*(s+i+2))=='n')
            printf("\n");
    }
}
int main()
{
    char s[201];
    int i=0,n;
    printf("text=");
    fgets(s,200,stdin);
    printf("n=");
    scanf("%d",&n);
    afisare(s,n);
    return 0;
}
