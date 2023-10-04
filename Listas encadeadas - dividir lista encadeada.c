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

void dividir(ListaE *lx, ListaE *ly){
    Cell *aux;
    int tam;
    if(ly==NULL)
        ly=criar_listaE();
    if(!listaE_vazia(lx) && listaE_vazia(ly)){
        tam=(tamanho_LE(lx));
        if(tam%2!=0)
            tam=(tamanho_LE(lx)/2);
        else
            tam=((tamanho_LE(lx)/2)-1);
        aux=lx->head;
        while(tam>0){
            aux=aux->next;
            tam--;
        }
        ly->head=aux->next;
        aux->next=NULL;
    }
}

int main (){
    ListaE *l1=criar_listaE();
    ListaE *l2=criar_listaE();
    int x;
    do
    {
        scanf("%d", &x);
        if(x>=0)
            inserirLE(x, l1);
    }while(x>=0);
    dividir(l1, l2);
    imprimir(l1);
    imprimir(l2);
    return 0;
}
