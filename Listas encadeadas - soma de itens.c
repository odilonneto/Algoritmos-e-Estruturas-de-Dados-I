#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

typedef struct Cell Cell;

struct Cell{
    int item;
    Cell *next;
};

typedef struct{
    Cell *head;
}ListaE;

Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;
    c->next = NULL;
    return c;
}

ListaE* criar_listaE(){
    ListaE* l = (ListaE*) malloc(sizeof(ListaE));
    l->head = NULL;
    return l;
}

int listaE_vazia(ListaE *l){
    return (l == NULL) || (l->head == NULL);
}

void inserirLE(int key, ListaE *l){
    Cell *aux, *novo;
    if(l == NULL)
        l = criar_listaE();
    if(listaE_vazia(l)){
        aux = criar_celula(key);
        aux->next = l->head;
        l->head = aux;
    }
    else{
        aux = l->head;
        while(aux->next != NULL)
            aux = aux->next;
        novo=criar_celula(key);
        aux->next=novo;
    }
}

void imprimir(ListaE *l){
    Cell *aux;
    if(!listaE_vazia(l)){
        aux = l->head;
        while (aux != NULL){
            printf("%d ", aux->item);
            aux = aux->next;
        }
        printf("\n");
    }
}

int tamanho_LE(ListaE *l){
    Cell *aux;
    int tam = 0;
    if(!listaE_vazia(l)){
        aux = l->head;
        while(aux != NULL){
            aux = aux->next;
            tam++;
        }
    }
    return tam;
}

int somar(ListaE *lx){
    Cell *aux;
    int soma=0;
    if(lx==NULL)
        lx=criar_listaE();
    if(!listaE_vazia(lx)){
        aux=lx->head;
        while(aux != NULL){
          soma=soma+aux->item;
          aux=aux->next;
        }
    }
    return soma;
}

int main (){
    ListaE *l1=criar_listaE();

    int x, z;
    do{
        scanf("%d", &x);
        if(x>=0)
            inserirLE(x, l1);
    }while(x>=0);
  
    printf("%d", somar(l1));
    return 0;
}
