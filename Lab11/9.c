#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char **cuvinte = NULL;
int nr = 0,*poz_max;

void eliberare()
{
    for(int i=0;i<nr;i++)
    {
        free(cuvinte[i]);
    }
    free(cuvinte);
}

char *cuvant()
{
    char buf[201];
    char *p;
    int nr_caract;

    printf("cuvant = ");
    scanf("%s",buf);
    nr_caract = strlen(buf)+1;

    p = (char*)malloc(nr_caract*sizeof(char));
    if(p==NULL)
    {
        eliberare();
        printf("Eroare alocare memorie");
        exit(EXIT_FAILURE);
    }

    strcpy(p,buf);
    return p;
}


int main()
{
    char **cuvinte2;
    char *p;

    for(;;)
    {
        p = cuvant();
        if(strcmp(p,"gata") == 0)
        {
            free(p);
            break;
        }

        nr++;

        cuvinte2 = (char**)realloc(cuvinte,nr*sizeof(char*));
        if(cuvinte2 == NULL)
        {
            eliberare();
            printf("eroare alocare");
            exit(EXIT_FAILURE);
        }

        cuvinte = cuvinte2;
        cuvinte[nr-1] = p;

    }
    for(int i=0;i<nr;i++)
        printf("%s ",cuvinte[i]);
    return 0;
}
