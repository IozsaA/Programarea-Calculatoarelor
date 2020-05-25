#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char key[51];
    char value[1001];
}dictionar;
dictionar*dict;
int main()
{
    int N;
    printf("nr dictionare=");scanf("%d",&N);
    if((dict=(dictionar*)malloc(N*sizeof(dictionar)))==NULL){
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    char k[50],v[1000];
    for(int i=0;i<N;i++){
        printf("cuvant=");scanf("%s",k);
        printf("explicatie=");scanf("%s",v);
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
