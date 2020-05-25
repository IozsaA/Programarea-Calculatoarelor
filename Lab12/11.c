#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char*key;
    char*value;
}dictionar;
dictionar*dict;

char *citire(char*p)
{
    char buf[201];
    size_t n;
    fgets(buf,201,stdin);
    buf[strcspn(buf,"\n")]='\0';
    n=strlen(buf)+1;
    if((p=(char*)malloc(n*sizeof(char)))==NULL){
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
        }
    strcpy(p,buf);
    return p;
}
int main()
{
    int N;
    printf("nr dictionare=");scanf("%d",&N);
    if((dict=(dictionar*)malloc(N*sizeof(dictionar)))==NULL){
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    char *k,*v;
    getchar();
    for(int i=0;i<N;i++){
        printf("cuvant=");k=citire(k);
        printf("explicatie=");v=citire(v);
        if((dict[i].key=(char*)malloc(strlen(k)*sizeof(char)))==NULL){
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        if((dict[i].value=(char*)malloc(strlen(v)*sizeof(char)))==NULL){
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
        strcpy(dict[i].key,k);
        strcpy(dict[i].value,v);
    }
    printf("\n");
    printf("cuvant cautat=");scanf("%s",k);
    for(int i=0;i<N;i++){
        if(strcmp(dict[i].key,k)==0){
            printf("Cuvantul %s are sensul de %s\n",k,dict[i].value);
            return 0;
        }
    }
    printf("Cuvantul %s nu a fost gasit in dictionar",k);
    return 0;
}
