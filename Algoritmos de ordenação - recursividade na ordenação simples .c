#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ordenar(int vet[], int tam){
    int i, x;
    for(i=0; i<tam-1; i++){
        if(vet[i] > vet[i+1]){
            x=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=x;
            ordenar(vet, tam);
        }
    }
}
int main ()
{
    int tam, x;
    scanf("%d", &tam);
    int vet[tam];

    for(x=0; x<tam; x++)
        scanf("%d", &vet[x]);
    ordenar(vet, tam);
    for(x=0; x<tam; x++)
        printf("%d ", vet[x]);
    return 0;
}
