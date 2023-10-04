#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int combinacao(int key, int vet[], int tam, int parte){
    int i, j, meio, ini=0, fim=tam-1;
    while((fim-ini+1)>parte)
    {
        if((ini==fim)&& (key==vet[ini]))
            return ini;
        else if(ini<fim)
        {
            meio=(ini+fim)/2;
            if(key==vet[meio])
                return meio;
            else if(key<vet[meio])
                fim=meio-1;
            else
                ini=meio+1;
        }
        else
            return -1;
    }
    for(i=ini; i<=fim; i++)
        printf("%d ", vet[i]);
    printf("\n");
    for(j=0; j<tam && key!=vet[j]; j++);
    if(key>vet[tam-1])
        return -1;
    else if(j<key)
        return j;
    else
        return -1;
}

int main (){
    int i, chave, tam, part;
    scanf("%d", &chave);
    scanf("%d", &tam);
    int vet[tam];

    for(i=0; i<tam; i++)
        scanf("%d", &vet[i]);
    scanf("%d", &part);
    printf("%d", combinacao(chave, vet, tam, part));
    return 0;
}
