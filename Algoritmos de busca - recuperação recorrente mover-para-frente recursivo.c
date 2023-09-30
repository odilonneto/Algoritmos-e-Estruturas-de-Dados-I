#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca(int *v, int key, int n){
    int i, aux, cont=0;
    if(v[0]!=key)
    {
        for(i=0; i<n; i++)
            if(v[i]==key)
                cont=i;
        if(cont!=0)
        {
            aux=v[cont-1];
            v[cont-1]=v[cont];
            v[cont]=aux;
            troca(v, key, n);
        }
    }
}

int main (){
    int i, x, num, tam;
    scanf("%d", &tam);
    int *vet=(int*) malloc(tam*sizeof(int));
    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%d", &x);
        troca(vet, x, tam);
    }
    for(i=0; i<tam; i++)
        printf("%d ", vet[i]);
    free(vet);
    return 0;
}
