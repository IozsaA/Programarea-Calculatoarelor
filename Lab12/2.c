#include <stdio.h>
#include <stdlib.h>
struct numarmare{
    int n;
    int numar[1000];
};
struct numarmare mare1,mare2;
void citire(struct numarmare *nr){
    printf("n=");scanf("%d",&nr->n);getchar();
    printf("Numarul este=");
    for(int i=0;i<nr->n;i++){
        nr->numar[i]=getchar()-'0';
    }
}
void afisare(struct numarmare *nr){
    for(int i=0;i<nr->n;i++){
        printf("%d",nr->numar[i]);
    }
    printf("\n");
}
int suma(struct numarmare *nr1,struct numarmare *nr2){
    int s1=0,s2=0,n;
    for(int i=0;i<nr1->n;i++){
        s1=s1*10+nr1->numar[i];
    }
    for(int i=0;i<nr2->n;i++){
        s2=s2*10+nr2->numar[i];
    }
    return s1+s2;
}
int main()
{
    citire(&mare1);
    citire(&mare2);
    printf("\n");
    printf("Primul numar mare:");afisare(&mare1);
    printf("Al doilea numar mare:");afisare(&mare2);
    printf("Suma numerelor mari:%d",suma(&mare1,&mare2));
    return 0;
}
