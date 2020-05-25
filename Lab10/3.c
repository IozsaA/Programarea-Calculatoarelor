#include <stdio.h>
#include <stdlib.h>
char* stergere(char *sir,int s,int d)
{
    strcpy (sir+s,sir+s+d);
    return sir;
}
int main()
{
    char s[101],p;
    int l1,l2;
    printf("text= ");
    fgets(s,100,stdin);
    printf("pozitia=");scanf("%d",&l1);
    printf("lungimea=");scanf("%d",&l2);
    printf("%s",stergere(s,l1,l2));
    return 0;
}
