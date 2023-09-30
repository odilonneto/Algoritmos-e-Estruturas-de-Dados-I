#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Cell Cell;
struct Cell{
    char *nome;
    Cell *next;
};

typedef struct{
    Cell *head;
}ListaE;

Cell* criar_celula(char nomes[]){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->nome = nomes;
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

void inserirLE(char nome[], ListaE *l){
    Cell *aux, *novo;
    if(l == NULL)
    {
        l = criar_listaE();
    }
    if(listaE_vazia(l))
    {
        aux = criar_celula(nome);
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
        novo=criar_celula(nome);
        aux->next=novo;
    }
}

void imprimir(ListaE *l){
    Cell *aux;
    if(!listaE_vazia(l))
    {
        aux = l->head;
        while (aux != NULL){
            printf("%s\n", aux->nome);
            aux = aux->next;
        }
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

void bubblesort_recursivo(ListaE* l, int n){
    Cell *auxA;
    char *x;
    if(n==1 || l==NULL)
        return;
    else{
        for(auxA=l->head; auxA->next!=NULL; auxA=auxA->next){
            if(strcmp(auxA->nome, auxA->next->nome) > 0){
                x=auxA->nome;
                auxA->nome=auxA->next->nome;
                auxA->next->nome=x;
            }
        }
        bubblesort_recursivo(l, n-1);
    }
}

void selectsort2(ListaE *l){
    Cell *auxA, *auxB, *p;
    char *n;
    for (auxA=l->head; auxA->next!=NULL;  auxA=auxA->next){
        p=auxA;
    
        for (auxB=auxA->next; auxB!=NULL; auxB=auxB->next){
            if (strcmp(auxB->nome, p->nome)<0)
                p = auxB;
        }
        if (strcmp(p->nome, auxA->nome)!=0){
            n = auxA->nome;
            auxA->nome = p->nome;
            p->nome = n;
        }
    }
}

int main(){
    ListaE *l=criar_listaE();
    int num;
    scanf("%d", &num);
    do
    {
        char *nome=malloc(sizeof(char)*50);
        scanf("%s", nome);
        inserirLE(nome, l);
        num--;
    }while(num>0);
    selectsort2(l);
    imprimir(l);
    liberar_LE(l);
    return 0;
}
