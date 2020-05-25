#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct
{
    char **orase;
    int **mat;
    int n;
}distante;

int main()
{
    char c,aux[31];
    int k=0;
    distante d;

    printf("nr de orase = ");
    scanf("%d",&d.n);

    d.orase = (char**)malloc(d.n*sizeof(char*));
    if(d.orase == NULL)
    {
        printf("eroare alocare memorie");
        free(d.orase);
        exit(EXIT_FAILURE);
    }

    for(int i=0;i<d.n;i++)
    {
        d.orase[i] = NULL;
    }

    for(int i=0;i<d.n;i++)
    {
        printf("oras = ");
        scanf("%s",&aux);
        d.orase[i] = (char*) malloc(strlen(aux) + 1);
        if(d.orase[i] == NULL)
        {
            printf("err");
            for(int j=0;j<i;j++)
            {
                free(d.orase[i]);
            }
            free(d.orase);
            exit(EXIT_FAILURE);
        }

        strcpy(d.orase[i],aux);
    }

    d.mat = (int**)malloc(d.n*sizeof(int));
    if(d.mat==NULL)
    {
        printf("err");
        free(d.mat);
      exit(EXIT_FAILURE);
    }

    for(int i=0;i<d.n;i++)
    {
        d.mat[i] = (int*)malloc(d.n*sizeof(int));
        if(d.mat[i] == NULL)
        {
            printf("err");
            for(int j=0;j<i;j++)
            {
                free(d.mat[i]);
            }
            free(d.mat);
            exit(EXIT_FAILURE);
        }
    }

    for(int i=0;i<d.n;i++)
    {
        for(int j=0;j<d.n;j++)
        {
            printf("Distanta de la %s la %s  = ",d.orase[i],d.orase[j]);
            scanf("%d",&d.mat[i][j]);
        }
    }

    for(int i=0;i<d.n;i++)
    {
        printf("%s  ",d.orase[i]);
        for(int j=0;j<d.n;j++)
        {
            printf("%d ",d.mat[i][j]);
        }
        printf("\n");
    }
}
