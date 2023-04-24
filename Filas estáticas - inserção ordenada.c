#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

typedef struct{
    int item[100];
    int ini;
    int fim;
    int tam;
}Fila;

Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->ini = -1;
    f->fim = -1;
    f->tam = 0;
    return f;
}

int fila_cheia(Fila *f){
    if (f == NULL)
        return -1;
    else if (f->tam < 100)
        return 0;
    else
        return 1;
}

int fila_vazia(Fila *f){
    if (f == NULL)
        return -1;
    else if (f->tam > 0)
        return 0;
    else
        return 1;
}

int enfileirar(Fila *f, int chave){
    if (f == NULL)
        f = criar_fila();
    if (!fila_cheia(f)){
        if (f->ini < 0)
            f->ini = 0;
        if (f->fim < 100 - 1)
            f->fim++;
        else
            f->fim = 0;
        f->item[f->fim] = chave;
        f->tam++;
        return 1;
    }
    return 0;
}

int desenfileirar(Fila *f){
    int item = INT_MIN;
    if (!fila_vazia(f)){
        item = f->item[f->ini];
        if (f->ini < 100 - 1)
            f->ini++;
        else
            f->ini = 0;
        f->tam--;
        if (f->tam == 0){
            f->ini = -1;
            f->fim = -1;
        }
    }
    return item;
}

int primeiro(Fila *f){
    return f->item[f->ini];
}

void enfileirar_ordenado(Fila *f, int key){
    Fila *aux=criar_fila();
    
    while(!fila_vazia(f) && key>primeiro(f))
        enfileirar(aux, desenfileirar(f));
    
    enfileirar(f, key);
    
    while(!fila_vazia(aux))
        enfileirar(f, desenfileirar(aux));
}

void imprimir_fila(Fila *f){
    Fila aux = *f;
    int item;
    while (!fila_vazia(&aux)){
        item = desenfileirar(&aux);
        printf("%d ", item);
    }
    printf("\n");
}

void liberar_fila(Fila *f){
    if (f != NULL)
        free(f);
}

int main(){
    int x;
    Fila *F=criar_fila();
    do
    {
        scanf("%d", &x);
        if(x>0)
            enfileirar_ordenado(F, x);
    }while(x>=0);
    imprimir_fila(F);
    liberar_fila(F);
    return 0;
}
