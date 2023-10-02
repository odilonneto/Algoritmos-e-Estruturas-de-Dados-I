#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    float num;
    int inteira;
    float fracionario;
}numeros;

void frac(float num, int *inteiro, float *fracionario){
    *inteiro=(int)num;
    *fracionario=num-*inteiro;
}

int main ()
{
    int i, quantidade;
    scanf("%d", &quantidade);
    numeros vet[quantidade];

    for(i=0; i<quantidade; i++)
        scanf("%f", &vet[i].num);
    
    for(i=0; i<quantidade; i++){
        frac(vet[i].num, &vet[i].inteira, &vet[i].fracionario);
        printf("N=%.3f I=%d F=%.3f\n", vet[i].num, vet[i].inteira, vet[i].fracionario);
    }
    return 0;
}
