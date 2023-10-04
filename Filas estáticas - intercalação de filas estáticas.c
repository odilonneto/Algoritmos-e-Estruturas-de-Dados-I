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

static void troca_maior(int *a,int *b){
    int aux;
    
    if(*a < *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

static void concatenar_subfila(Fila *dest, Fila *orig){
    if((dest != NULL)&&(orig != NULL))
        while(!fila_vazia(orig))
            enfileirar(dest, desenfileirar(orig));
}

Fila* intercalada(Fila *f1, Fila *f2){
    int a, b;
    if(f1 == NULL)
        return f2;
    else if(f2 == NULL)
        return f1;
    else
    {
        Fila *f3=criar_fila();
        while(!fila_vazia(f1) && !fila_vazia(f2))
        {
            a=desenfileirar(f1);
            b=desenfileirar(f2);
            troca_maior(&a, &b);
            enfileirar(f3, a);
            enfileirar(f3, b);
        }
        concatenar_subfila(f3, f1);
        concatenar_subfila(f3, f2);
        return f3;
    }      
}

int main (){
    int item = 0;
    Fila *f1 =criar_fila();
    Fila *f2 =criar_fila();
    
    while(item != -1){
        scanf("%d", &item);
        
        if(item != -1)
            enfileirar(f1, item);
    }
    item =0;
    while(item != -1){
        scanf("%d", &item);
        
        if(item != -1)
            enfileirar(f2, item);
    }
    
    Fila *f3=intercalada(f1, f2);
    imprimir_fila(f3);
    
    liberar_fila(f1);
    liberar_fila(f2);
    liberar_fila(f3);
    return 0;
}
