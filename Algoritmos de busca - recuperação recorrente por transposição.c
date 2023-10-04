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

void imprimirLE(ListaE *l){
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

void troca(ListaE *le, int chave){
    int x;
    Cell *auxA, *auxB;
    auxA=le->head, auxB=auxA;
    auxB=auxA;

    if(le->head->item!=chave){
        while(auxA != NULL && auxA->item != chave){
            auxB=auxA;
            auxA=auxA->next;
        }
    }

    if(auxA!=NULL && chave==auxA->item){
        x=auxA->item;
        auxA->item=auxB->item;
        auxB->item=x;
    }
}

int main (){
    system("cls");
    ListaE *l1=criar_listaE();

    int x, contC, z;
    do{
        scanf("%d", &x);
        if(x>=0)
            inserirLE(x, l1);
    }while(x>=0);
  
    scanf("%d", &contC);
    
    do{
        scanf("%d", &z);
        troca(l1, z);
        contC--;
    }while(contC>0);
  
    imprimirLE(l1);
    return 0;
}
