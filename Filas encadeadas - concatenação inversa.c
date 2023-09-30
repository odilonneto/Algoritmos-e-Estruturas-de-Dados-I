#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Cell Cell;

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
    char item;
    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);
        printf("%d\n", item);
    }
}

void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}

struct Cell{
    int item;
    Cell *next;
};

typedef struct{
    Cell *inicio;
    Cell *fim;
}FilaE;

Cell* criar_celula(int key){
    Cell *c=(Cell*) malloc(sizeof(Cell));
    c->item=key;
    c->next=NULL;
    return c;
}

FilaE* criar_filaE(){
    FilaE *f=(FilaE*) malloc(sizeof(FilaE));
    f->inicio=NULL;
    f->fim=NULL;
    return f;
}

int filaE_vazia(FilaE* f){
    return (f==NULL)||(f->inicio==NULL);
}

void enfileirarE(int key, FilaE* f){
    Cell *aux;
    if (f==NULL)
        f=criar_filaE();
    aux=criar_celula(key);
    if (f->inicio==NULL)
        f->inicio=f->fim=aux;
    else{
        f->fim->next=aux;
        f->fim=f->fim->next;
    }
}

int desenfileirarE(FilaE* f){
    Cell *aux;
    int item=-INT_MAX;
    if (!filaE_vazia(f)){
        aux=f->inicio;
        f->inicio=aux->next;
        item=aux->item;
        free(aux);
    }
    return item;
}

void imprimir_filaE(FilaE* f){
    Cell *aux;
    if(!filaE_vazia(f))
    {
        aux=f->inicio;
        while (aux!=NULL){
            printf("%d ", aux->item);
            aux=aux->next;
        }
    }
}

int liberar_filaE(FilaE* f){
    if (!filaE_vazia(f)){
        while (f->inicio != NULL)
            desenfileirarE(f);
        free(f);
        return 1;
    }
    return 0;
}

void concatenar(FilaE *f1, FilaE *f2, FilaE *f3){
    Pilha *p=criar_pilha();
    while(!filaE_vazia(f1))
        empilhar(p, desenfileirarE(f1));
    while(!pilha_vazia(p))
        enfileirarE(desempilhar(p), f3);
    while(!filaE_vazia(f2))
        empilhar(p, desenfileirarE(f2));
    while(!pilha_vazia(p))
        enfileirarE(desempilhar(p), f3);
    liberar_pilha(p);
}

int main(){
    FilaE *f1=criar_filaE();
    FilaE *f2=criar_filaE();
    FilaE *f3=criar_filaE();
    int x;
    do
    {
        scanf("%d", &x);
        if(x>=0)
            enfileirarE(x, f1);
    }while(x>=0);
    do
    {
        scanf("%d", &x);
        if(x>=0)
            enfileirarE(x, f2);
    }while(x>=0);
    concatenar(f1, f2, f3);
    imprimir_filaE(f3);
    liberar_filaE(f1);
    liberar_filaE(f2);
    liberar_filaE(f3);
    return 0;
}
