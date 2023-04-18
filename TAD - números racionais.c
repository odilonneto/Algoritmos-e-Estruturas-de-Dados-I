#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int n;
    int d;
}RAC;



RAC *criar(int num, int den){
    RAC *numero=malloc(sizeof(RAC));
    numero->n=num;
    numero->d=den;
    return numero;
}

int mmc(int a, int b){
   int aux1=a, aux2=b;
    while(aux2 != 0){
        int r=aux1%aux2;
        aux1=aux2;
        aux2=r;
    }
    return a*(b/aux1);
}

RAC *somar(RAC *r1, RAC *r2){
    RAC *numero=malloc(sizeof(RAC));
    numero->d=mmc(r1->n, r2->d);
    numero->n=((numero->d/r1->d)*r1->n)+((numero->d/r2->d)*r2->n);
    return numero;
}

RAC *subtrair(RAC *r1, RAC *r2){
    RAC *numero=malloc(sizeof(RAC));
    numero->d=mmc(r1->n, r2->d);
    numero->n=((numero->d/r1->d)*r1->n)-((numero->d/r2->d)*r2->n);
    return numero;
}

RAC *multiplicar(RAC *r1, RAC *r2){
    RAC *numero=malloc(sizeof(RAC));
    numero->n=(r1->n)*(r2->n);
    numero->d=(r1->d)*(r2->d);
    return numero;
}

RAC *dividir(RAC *r1, RAC *r2){
    RAC *numero=malloc(sizeof(RAC));
    numero->n=(r1->n)*(r2->d);
    numero->d=(r1->d)*(r2->n);
    return numero;
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    RAC *num1=criar(x, y);
    scanf("%d %d", &x, &y);
    RAC *num2=criar(x, y);

    printf("r1: %d/%d\n", num1->n, num1->d);
    printf("r2: %d/%d\n", num2->n, num2->d);
    RAC *som=somar(num1, num2);
    RAC *sub=subtrair(num1, num2);
    RAC *mult=multiplicar(num1, num2);
    RAC *div=dividir(num1, num2);
    
    printf("r1+r2=%d/%d\n", som->n, som->d);
    printf("r1-r2=%d/%d\n", sub->n, sub->d);
    printf("r1*r2=%d/%d\n", mult->n, mult->d);
    printf("r1/r2=%d/%d", div->n, div->d);
    return 0;
}
