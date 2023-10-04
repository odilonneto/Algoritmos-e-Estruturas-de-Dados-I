#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

typedef struct{
    int item[100];
    int topo;
}Pilha;

Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

int pilha_cheia(Pilha *p){
    if(p == NULL)
        return -1;
    else if (p->topo == (100 - 1))
        return 1;
    else
        return 0;
}

int pilha_vazia(Pilha *p){
    if(p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}

int empilhar(Pilha *p, int item){
    if (p == NULL)
        p = criar_pilha();
    if (!pilha_cheia(p)){
        p->topo++;
        p->item[p->topo]=item;
        return 1;
    }
    return 0;
}

int desempilhar (Pilha *p){
    int item = INT_MIN;
    if (!pilha_vazia(p)){
        item = p->item[p->topo];
        p->topo--;
    }
    return item;
}

void imprimir_pilha(Pilha *p){
    Pilha aux = *p;
    int item;
    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);
        printf("%d", item);
    }
}

void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}

void criar_binario(int num, Pilha *P){
    int x;
    while(num>0){
        x=num%2;
        num = num/2;
        empilhar(P, x);
    }
}

int main (){
    int num;
    Pilha *binario=criar_pilha();
    scanf("%d", &num);
    criar_binario(num, binario);
    imprimir_pilha(binario);
    liberar_pilha(binario);
    return 0;
}
