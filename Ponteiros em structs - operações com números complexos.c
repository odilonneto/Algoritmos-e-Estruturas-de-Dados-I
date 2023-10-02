#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    float real;
    float imag;
    float mod;
}complexo;

void atualizarComplexo(complexo *c, float real, float imag){
    c->real=real;
    c->imag=imag;
    c->mod=sqrt(real*real+imag*imag);
}

int main (){
    complexo num;
    float real, imag;
    scanf("%f %f", &real, &imag);
    atualizarComplexo(&num, real, imag);

    if(imag>=0)
        printf("%.1f+%.1fi\n", num.real, num.imag);
    else
        printf("%.1f%.1fi\n", num.real, num.imag);
    printf("%.1f", num.mod);

    return 0;
}
