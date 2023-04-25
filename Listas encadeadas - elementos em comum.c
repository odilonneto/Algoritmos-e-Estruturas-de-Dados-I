#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    {
        l = criar_listaE();
    }
    if(listaE_vazia(l))
    {
        aux = criar_celula(key);
        aux->next = l->head;
        l->head = aux;
    }
    else
    {
        aux = l->head;
        while(aux->next != NULL)
        {
            aux = aux->next;
        }
        novo=criar_celula(key);
        aux->next=novo;
    }
}

void imprimir(ListaE *l){
    Cell *aux;
    if(!listaE_vazia(l))
    {
        aux = l->head;
        while (aux != NULL){
            printf("%d ", aux->item);
            aux = aux->next;
        }
        printf("\n");
    }
}

int liberar_LE(ListaE *l){
    Cell *aux = NULL;
    if (l != NULL){
        while(l->head != NULL){
            aux = l->head;
            l->head = aux->next;
            free(aux);
        }
        free(l);
        return 1;
    }
    return 0;
}

void inserirLE_ordenado(int key, ListaE *l){
    Cell *aux, *novo;
    if(l == NULL)
    {
        l = criar_listaE();
    }
    if(listaE_vazia(l))
    {
        aux = criar_celula(key);
        aux->next = l->head;
        l->head = aux;
    }
    else if(key < l->head->item)
    {
        novo=criar_celula(key);
        novo->next=l->head;
        l->head=novo;
    }
    else
    {
        aux=l->head;
        while(aux->next && key > aux->next->item)
            aux=aux->next;
        novo=criar_celula(key);
        novo->next=aux->next;
        aux->next=novo;
    }
}

ListaE *elementos(ListaE *l1, ListaE *l2){
    ListaE *l=criar_listaE();
    Cell *aux1=l1->head;
    
    while(aux1 != NULL)
    {
        Cell *aux2=l2->head;
        while(aux2 != NULL)
        {
            if(aux1->item==aux2->item)
                inserirLE_ordenado(aux2->item, l);
            aux2=aux2->next;
        }
        aux1=aux1->next;
    }
    liberar_LE(l1);
    liberar_LE(l2);
    return l;
}

int main ()
{
    ListaE *l1=criar_listaE();
    ListaE *l2=criar_listaE();
    int x;
    do
    {
        scanf("%d", &x);
        if(x!=-1)
            inserirLE(x, l1);
    }while(x!=-1);
    do
    {
        scanf("%d", &x);
        if(x!=-1)
            inserirLE(x, l2);
    }while(x!=-1);
    ListaE *l3=elementos(l1, l2);
    imprimir(l3);
    liberar_LE(l3);
    return 0;
}
