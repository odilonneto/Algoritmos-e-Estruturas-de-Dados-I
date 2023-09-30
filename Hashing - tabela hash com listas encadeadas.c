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

ListaE* criar_listaE(){
    ListaE* l = (ListaE*) malloc(sizeof(ListaE));
    l->head = NULL;
    return l;
}

Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;
    c->next = NULL;
    return c;
}

typedef struct{
    unsigned int tam;
    ListaE *buckets;
}HashTa;

HashTa *criarA(unsigned int tam){
    HashTa *t = malloc(sizeof(HashTa));
    int i;
    t->tam = tam;
    t->buckets = malloc(tam * sizeof(ListaE));
    for(i= 0; i<tam; i++)
        t->buckets[i].head=criar_celula(-1);
    return t;
}

int inserirTA(int key, HashTa *tA){
    int x=key % tA->tam;
    printf("%d\n", x);
    Cell *aux, *novo;
    if(tA->buckets[x].head->item == -1)
    {
        aux = criar_celula(key);
        aux->next = tA->buckets[x].head;
        tA->buckets[x].head = aux;
    }
    else
    {
        aux = tA->buckets[x].head;
        while(aux->next != NULL)
        {
            aux = aux->next;
        }
        novo=criar_celula(key);
        aux->next=novo;
    }
    return 0;
}

void imprimir2(HashTa *tA)
{
    int i;
    Cell* aux;
    for(i = 0; i < tA->tam; i++)
    {
        aux=tA->buckets[i].head;
        printf("%d:", i);
        if(aux->item==-1)
            printf(" ->");
        while(aux!=NULL)
        {
            if(aux->item!=-1)
                printf(" -> %d", aux->item);
            aux=aux->next;
        }
        printf("\n");
    }
    free(aux);
}

int liberar(HashTa *t){
    if (t != NULL){
        free(t->buckets);
        free(t);
        return 1;
    }
    return 0;
}

int main(){
    int i=0, tamT, quant, x;
    scanf("%d", &tamT);
    HashTa *tA=criarA(tamT);
    scanf("%d", &quant);
    do
    {
        scanf("%d", &x);
        inserirTA(x, tA);
        i++;
    }while(i<quant);
    printf("\n");
    imprimir2(tA);
    liberar(tA);
    return 0;
}
