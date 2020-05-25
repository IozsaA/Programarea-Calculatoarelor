#include <stdio.h>
#include <stdlib.h>
char* inserare(char *sir,char *ins,int s)
{
    char *aux;
    ins[strlen(ins)-1]=NULL;
    strcpy(aux,sir+s);
    sir[s]=NULL;
    strcat(sir,ins);
    strcat(sir,aux);
    return sir;
}
int main()
{
    char s[101];
    char ins[101];
    int l1;
    printf("text= ");fgets(s,100,stdin);
    printf("pozitia=");scanf("%d",&l1);
    getchar();
    printf("sir inserat=");fgets(ins,100,stdin);
    printf("%s",inserare(s,ins,l1));
    return 0;
}
