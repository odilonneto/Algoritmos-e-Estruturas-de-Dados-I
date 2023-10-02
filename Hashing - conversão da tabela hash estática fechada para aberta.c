#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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

typedef struct{
    unsigned int tam;
    int*buckets;
}HashT;

HashT *criar(unsigned int tam){
    HashT *t = malloc(sizeof(HashT));
    int i;
    t->tam = tam;
    t->buckets = malloc(tam * sizeof(int));
    for (i= 0; i<tam; i++)
        t->buckets[i] = -1;
    return t;
}

static int hashingF(int k, int B){
    return k % B;
}

static int overflow_prog(int hashC, int B, int tentativa){
    return (hashC + tentativa) % B;
}

int inserir(int key, HashT *t){
    int x, i, rh;
    if ((t != NULL) && (key > 0)){
        x=hashingF(key, t->tam);
        if(t->buckets[x] <= 0)
        {
            t->buckets[x] = key;
            return 1;
        }else
        {
            i=1;
            rh=x;
            while((i < t->tam) && (t->buckets[rh] != key) && (t->buckets[rh] > 0))
            {
                rh=overflow_prog(x, t->tam, i);
                i++; 
            }
            if ((i < t->tam) && (t->buckets[rh] <= 0))
            {
                t->buckets[rh] = key;
                return 1;
            }
        }
    }
    return 0;
}

void convertertF_tA(HashT *tF, HashTa *tA){
    for(int i=0; i<tF->tam; i++)
        inserirTA(tF->buckets[i], tA);
}

void imprimir2(HashTa *tA) {
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

int main (){
    int i=0, tamT, quant, x;
    scanf("%d", &tamT);
    HashT *tF=criar(tamT);
    scanf("%d", &quant);
    do
    {
        scanf("%d", &x);
        inserir(x, tF);
        i++;
    }while(i<quant);
  
    HashTa *tA=criarA(tamT);
    convertertF_tA(tF, tA);
    imprimir2(tA);
    return 0;
}
