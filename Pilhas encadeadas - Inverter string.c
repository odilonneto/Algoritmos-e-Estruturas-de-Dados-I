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

void empilharE(char key, PilhaE *p){
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
            printf("%c", aux->item);
            aux = aux->next;
        }
    }
}

void inverter(PilhaE *p, char vet[]){
    int i;
    for(i=0; i<strlen(vet); i++)
        empilharE(vet[i], p);
     for(i=0; i<strlen(vet); i++){
        vet[i]=desempilharE(p);
        printf("%c", vet[i]);
     }
}

int main (){
    PilhaE *p1=criar_pilhaE();
    char *key=(char*)(malloc(sizeof(char)*100));;
    scanf("%s", key);
    inverter(p1, key);
    return 0;
}
