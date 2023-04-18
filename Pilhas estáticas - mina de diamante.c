#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
typedef struct{
    float item[100];
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
int empilhar(Pilha *p, float item){
    if (p == NULL)
        p = criar_pilha();
    if (!pilha_cheia(p)){
        p->topo++;
        p->item[p->topo]=item;
        return 1;
    }
    return 0;
}
int desempilhar(Pilha *p){
    int item = INT_MIN;
    if (!pilha_vazia(p))
    {
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
        printf("%c", item);
    }
}
void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}

int diamantes(char *vet){
    Pilha *P=criar_pilha();
    int i, cont=0;
    
    for(i=0; i<strlen(vet); i++)
    {
        if(vet[i]=='<')
            empilhar(P, vet[i]);
        if(vet[i+1]=='>' && !pilha_vazia(P))
        {
            desempilhar(P);
            cont++;
        }
    }
    return cont;
}

int main ()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        char *mining=(char*)(malloc(sizeof(char)*100));
        scanf("%s", mining);
        printf("%d\n", diamantes(mining));
    }
    return 0;
}
