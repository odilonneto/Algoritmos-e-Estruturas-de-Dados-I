#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void funcao(int *a, int *b, int *c){
    *c=abs(*a-*b);
    *a=*a+*c;
    *b=*b-*c;
}
int main (){
    int *a, *b, *c;

    scanf("%d %d", &a, &b);
    funcao(&a, &b, &c);
    printf("A=%d B=%d C=%d", a, b, c);

    return 0;
}
