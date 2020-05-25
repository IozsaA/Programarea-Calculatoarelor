#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* inserare(char *sir,char *ins,int s)
{
    char *aux;
    *(ins+strlen(ins)-1)=NULL;
    strcpy(aux,sir+s);
    *(sir+s)=NULL;
    strcat(sir,ins);
    strcat(sir,aux);
    return sir;
}
char* stergere(char *sir,int s,int d)
{
    strcpy (sir+s,sir+s+d);
    return sir;
}
char* inlocuire(char *sir)
{
    char *p,aux[101],sir1[101],sir2[101];
    printf("sir1=");fgets(sir1,100,stdin);sir1[strlen(sir1)-1]=NULL;
    printf("sir2=");fgets(sir2,100,stdin);sir2[strlen(sir2)-1]=NULL;
    strcpy(aux,sir);
    p=strtok(aux," ");
    while(p)
    {
        if(strcmp(p,sir1)==0)
        {
            strcpy(sir,stergere(sir,p-aux,strlen(sir1)));
            strcpy(sir,inserare(sir,sir2,p-aux));
        }
        p=strtok(NULL," ");
    }
    return sir;
}
int main()
{
    char s[101];
    printf("text= ");fgets(s,100,stdin);
    printf("%s",inlocuire(s));
    return 0;
}

