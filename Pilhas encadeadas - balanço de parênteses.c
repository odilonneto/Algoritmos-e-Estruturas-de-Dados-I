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

void empilharE(int key, PilhaE *p){
    Cell *aux;

    if(p==NULL)
        p=criar_pilhaE();
    aux=criar_celula(key);
    aux->next=p->topo;
    p->topo=aux;
}

int desempilharPE(PilhaE *p){
    Cell *aux;
    int item=-INT_MAX;

    if (!pilhaE_vazia(p)){
        aux=p->topo;
        item=aux->item;
        p->topo=aux->next;
        free(aux);
    }
    return item;
}

void parentese(char vet[]){
     PilhaE *p=criar_pilhaE();
     int i, x=strlen(vet);

     if(vet[0]==')')
         printf("incorrect\n");
     else{
         for(i=0; i<x; i++){
             switch(vet[i]){
                 case '(':
                    empilharE(vet[i], p);
                    break;
                 case ')':
                     if(pilhaE_vazia(p))
                         empilharE(vet[i], p);
                     else
                         desempilharPE(p);
                    break;
             }
         }
         if(pilhaE_vazia(p))
             printf("correct\n");
         else
             printf("incorrect\n");
     }
}

int main (){
    int num, i;
    char key[100];
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%s", key);
        parentese(key);
    }
    return 0;
}
