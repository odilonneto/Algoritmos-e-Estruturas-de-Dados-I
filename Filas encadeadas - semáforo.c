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
    if(!filaE_vazia(f)){
        aux=f->inicio;
        while (aux!=NULL){
            printf("%d ", aux->item);
            aux=aux->next;
        }
    }
}

void semaforo(FilaE* x, FilaE* y, FilaE* z, FilaE* w){
    int cont;
    while(!filaE_vazia(x) || !filaE_vazia(y) || !filaE_vazia(z)){
        if(!filaE_vazia(x)){
            cont=0;
            do{
                if(!filaE_vazia(x)){
                    enfileirarE(desenfileirarE(x), w);
                    cont++;
                }
                else
                    cont=3;
            }while(cont<3);
        }
        if(!filaE_vazia(y)){
            cont=0;
            do{
                if(!filaE_vazia(y)){
                    enfileirarE(desenfileirarE(y), w);
                    cont++;
                }
                else
                    cont=3;
            }while(cont<3);
        }
        if(!filaE_vazia(z)){
            cont=0;
            do{
                if(!filaE_vazia(z)){
                    enfileirarE(desenfileirarE(z), w);
                    cont++;
                }
                else
                    cont=3;
            }while(cont<3);
        }
    }
}

int main (){
    FilaE *f1=criar_filaE();
    FilaE *f2=criar_filaE();
    FilaE *f3=criar_filaE();
    FilaE *f4=criar_filaE();
    int x;
  
    do{
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
  
    do
    {
        scanf("%d", &x);
        if(x>=0)
            enfileirarE(x, f3);
    }while(x>=0);
    semaforo(f1, f2, f3, f4);
    imprimir_filaE(f4);
    return 0;
}
