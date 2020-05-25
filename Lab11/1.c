#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    int **m;
    printf("n=");scanf("%d",&n);
    if((m=(int**)malloc(n*sizeof(int*)))==NULL){
        printf("memorie insuficienta\n");
        exit(EXIT_FAILURE);
        }
    for(i=0;i<n;i++){
        if((m[i]=(int*)malloc((n-i)*sizeof(int)))==NULL){
            printf("memorie insuficienta\n");
            exit(EXIT_FAILURE);
        }
    }
    for(i=0;i<n;i++)
        m[i][0]=1;
    for(j=1;j<n;j++)
        m[0][j]=1;
    for(i=1;i<n;i++){
        for(j=1;j<n-i;j++){
            m[i][j]=m[i-1][j]+m[i][j-1];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    free(m);
    return 0;
}
