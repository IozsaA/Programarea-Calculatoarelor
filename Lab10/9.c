#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void afisare(char*s)
{
    char *p,m[200][201];
    int i,j,n=0,k=0;
    p=strtok(s," ");
    while(p)
    {

        strcpy(*(m+n),p);
        n++;
        p=strtok(NULL," ");
    }
    for(i=0;i<n-1;i++)
    {
        if(strcmp(*(m+i)," "))
            printf("%s:",*(m+i));
        k=1;
        for(j=i+1;j<n;j++)
            if(strcmp(*(m+i),*(m+j))==0)
            {
                strcpy(*(m+j)," ");
                k++;
            }
        if(strcmp(*(m+i)," "))
        printf("%d\n",k);
    }
}
int main()
{
    char s[201];
    int i=0,n;
    printf("text=");
    fgets(s,200,stdin);
    *(s+strlen(s)-1)=NULL;
    afisare(s);
    return 0;
}
