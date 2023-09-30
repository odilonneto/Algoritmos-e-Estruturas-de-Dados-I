#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Cell Cell;
struct Cell{
    int item;
    Cell *next;
};

typedef struct{
    Cell *topo;
}PilhaE;

Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;
    c->next = NULL;
    return c;
}

PilhaE* criar_pilhaE(){
    PilhaE* p = (PilhaE*) malloc(sizeof(PilhaE));
    p->topo = NULL;
    return p;
}

int pilhaE_vazia(PilhaE *p){
    return (p == NULL) || (p->topo == NULL);
}

void empilharE(int key, PilhaE *p){
    Cell *aux;

    if(p==NULL)
        p=criar_pilhaE();
    aux=criar_celula(key);
    aux->next=p->topo;
    p->topo=aux;
}

int desempilharE(PilhaE *p){
    Cell *aux;
    int item = -INT_MAX;
    if (!pilhaE_vazia(p)){
        aux = p->topo;
        item = aux->item;
        p->topo = aux->next;
        free(aux);
    }
    return item;
}

void imprimir_pilhaE(PilhaE *p){
    Cell *aux;

    if (!pilhaE_vazia(p)){
        aux=p->topo;
        while(aux!=NULL){
            if(aux->item>9)
            {
                printf("%c", aux->item+87);
                aux = aux->next;
            }
            else
            {
                printf("%d", aux->item);
                aux = aux->next;
            }
        }
    }
}

int liberar_pilha(PilhaE *p){
    if (p != NULL){
        while (!pilhaE_vazia(p))
            desempilharE(p);
        free(p);
        return 1;
    }
    return 0;
}
PilhaE *converter(int num, int base){
    PilhaE *p=criar_pilhaE();
    int x;
    while(num/base > 0)
    {
        x=num%base;
        empilharE(x, p);
        num=num/base;
    }
    empilharE(num, p);
    return p;
}

int main(){
    int num, base;
    scanf("%d %d", &num, &base);
    PilhaE *p=converter(num, base);
    imprimir_pilhaE(p);
    liberar_pilha(p);
    return 0;
}
