#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binario(int somar, int cont, int a, int vet[a]){ 
    somar=somar+vet[a]*pow(2, cont);
    if(a<=0)
        return somar;
    else 
        return binario(somar, cont+1, a-1, vet);
}

int main(){
    int tam, i;
    scanf("%d", &tam);
    int vet[tam];
    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);
    printf("%d", binario(0, 0, tam-1, vet));
}
