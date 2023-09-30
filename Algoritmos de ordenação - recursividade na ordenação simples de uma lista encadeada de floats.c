#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Cell Cell;
struct Cell{
    float item;
    Cell *next;
};

typedef struct{
    Cell *head;
}ListaE;

Cell* criar_celula(float key){
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

void inserirLE(float key, ListaE *l){
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
            printf("%.1f ", aux->item);
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

int tamanho_LE(ListaE *l){
    Cell *aux;
    int tam = 0;
    if (!listaE_vazia(l)){
        aux = l->head;
        while(aux != NULL){
            aux = aux->next;
            tam++;
        }
    }
    return tam;
}

void ordenar_recursivo(ListaE* l, int n){
    Cell *auxA;
    for(auxA=l->head; auxA->next!=NULL; auxA=auxA->next)
    {
        if(auxA->item > auxA->next->item)
        {
            float x=auxA->item;
            auxA->item=auxA->next->item;
            auxA->next->item=x;
        }
    }
    if(n>1)
        ordenar_recursivo(l, n-1);
}

int main(){
    ListaE *l=criar_listaE();
    float x;
    do
    {
        scanf("%f", &x);
        if(x>=0)
            inserirLE(x, l);
    }while(x>=0);
    ordenar_recursivo(l, tamanho_LE(l));
    imprimir(l);
    liberar_LE(l);
    return 0;
}
