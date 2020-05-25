#include <stdio.h>
#include <stdlib.h>
char vocale[]={'a','e','i','o','u'};
int v[5];
void nr_vocale(char *s)
{
    int i,j,k=0;
    for(int i=0;i<strlen(s);i++)
        for(int j=0;j<strlen(s);j++)
            if(*(s+i)==*(vocale+j))
            {
                k++;
                *(v+j)=*(v+j)+1;
            }
}
void histograma(char *s)
{
    for(int i=0;i<5;i++)
        {
            printf("%c: ",*(vocale+i));
            for(int j=0;j<*(v+i);j++)
                printf("*");
            printf("\n");
        }
}
int main()
{
    char s[81];
    printf("text= ");
    fgets(s,80,stdin);
    nr_vocale(s);
    histograma(s);
    return 0;
}
