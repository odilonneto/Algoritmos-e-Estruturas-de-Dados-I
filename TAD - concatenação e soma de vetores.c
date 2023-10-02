#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct{
    int *vet;
    int tamanho;
}Vetor;

Vetor * iniciar(int n){
    Vetor *vet=(malloc(sizeof(Vetor)));
    vet->tamanho=n;
    vet->vet=(int*)(malloc(n*sizeof(int)));
    return vet;
}

int inserir(Vetor *v, int i, int x){
    v->vet[i]=x;
    if(v->vet[i]==x)
        return 1;
    return 0;
}

Vetor * concatenar(Vetor *v1, Vetor *v2){
    int i, k=0;
    Vetor *vetC;
    vetC=iniciar(v1->tamanho+v2->tamanho);
    for(i=0; i<v1->tamanho; i++)
        inserir(vetC, i, v1->vet[i]);
    for(i=v1->tamanho; i<vetC->tamanho; i++, k++)
        inserir(vetC, i, v2->vet[k]);
    return vetC;
}

Vetor * soma(Vetor *v1, Vetor *v2){
    int i;
    Vetor *vetS;
    if(v1->tamanho>=v2->tamanho){
        vetS=iniciar(v1->tamanho);
        for(i=0; i<v1->tamanho; i++){
            inserir(vetS, i, v1->vet[i]+v2->vet[i]);
            if(i>=v2->tamanho)
                inserir(vetS, i, v1->vet[i]);
        }
    }
    else
    {
        vetS=iniciar(v2->tamanho);
        for(i=0; i<v2->tamanho; i++){
            inserir(vetS, i, v1->vet[i]+v2->vet[i]);
            if(i>=v1->tamanho)
                inserir(vetS, i, v2->vet[i]);
        }
    }
    return vetS;
}

int main (){
    int i, x, num1, num2;
    Vetor *vet1, *vet2, *vetC, *vetS;

    scanf("%d", &num1);
    vet1=iniciar(num1);
    for(i=0; i<num1; i++){
        scanf("%d", &x);
        inserir(vet1, i, x);
    }

    scanf("%d", &num2);
    vet2=iniciar(num2);
    for(i=0; i<num2; i++){
        scanf("%d", &x);
        inserir(vet2, i, x);
    }
    vetC=concatenar(vet1, vet2);
    vetS=soma(vet1, vet2);
    for(i=0; i<vetC->tamanho; i++)
        printf("%d ", vetC->vet[i]);

    printf("\n");
    for(i=0; i<vetS->tamanho; i++)
        printf("%d ", vetS->vet[i]);
    return 0;
}
