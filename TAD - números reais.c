#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    int inteiro;
    int fracionaria;
}Real;

Real* criar(int i, int f){
    Real *num=malloc(sizeof(Real));
    num->inteiro=i;
    num->fracionaria=f;
    return num;
}

Real* soma(Real *r1, Real *r2){
    float aux1, aux2;
    Real *num=malloc(sizeof(Real));

    aux1=((float)r1->inteiro)+((float)r1->fracionaria/100);
    aux2=((float)r2->inteiro)+((float)r2->fracionaria/100);
    num->inteiro=aux1+aux2;
    num->fracionaria=((aux1+aux2)*100)-(num->inteiro*100);
    return num;
}

Real* subtracao(Real *r1, Real *r2){
    float aux1, aux2;
    Real *num=malloc(sizeof(Real));

    aux1=((float)r1->inteiro)+((float)r1->fracionaria/100);
    aux2=((float)r2->inteiro)+((float)r2->fracionaria/100);
    num->inteiro=aux1-aux2;
    num->fracionaria=(((aux1+aux2)*100)-(num->inteiro*100))/10;
    return num;
}

int arredondar(Real *r1){
    float aux;
    aux=((float)r1->inteiro)+((float)r1->fracionaria/100);
    return aux +1;
}

void imprimir(Real *r1){
    if(r1->fracionaria>=0 && r1->fracionaria<=9)
        printf("%d.0%d\n", r1->inteiro, r1->fracionaria);
    else
        printf("%d.%d\n", r1->inteiro, r1->fracionaria);
}

int main (){
    int inteiro, frac;
    Real *num1, *num2, *nsoma, *subt;
    scanf("%d %d", &inteiro, &frac);
    num1=criar(inteiro, frac);
    scanf("%d %d", &inteiro, &frac);
    num2=criar(inteiro, frac);
    nsoma=soma(num1, num2);
    subt=subtracao(num1, num2);
    imprimir(num1);
    imprimir(num2);
    imprimir(nsoma);
    imprimir(subt);
    printf("%d %d", arredondar(num1), arredondar(num2));
    return 0;
}
