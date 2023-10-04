#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    int item[100];
    int tam;
}Lista;

Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    l->tam = 0;
    return l;
}

int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == 100);
}

int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

int inserir(Lista *l, int chave){
    if(!lista_cheia(l)){
        l->item[l->tam]=chave;
        l->tam++;
        return 1;
    }
    return 0;
}

void separarLista(Lista *lz, Lista *lx, Lista *ly){
    int i;
    for(i=0; i<lz->tam; i++){
        if(lz->item[i]%2==0)
            inserir(lx, lz->item[i]);
        else
            inserir(ly, lz->item[i]);
    }
}

void imprimir_lista(Lista *l){
    int i;
    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            printf("%d ", l->item[i]);
        printf("\n");
    }
}

int main(){
    int i, cont=0;
    Lista *l1, *l2, *l3;
    l1=criar_lista();
    for(i=0; l1->item[i-1]!=-1; i++){
        scanf("%d", &l1->item[i]);
        cont++;
        l1->tam=cont-1;
    }
  
    l2=criar_lista();
    l3=criar_lista();
    separarLista(l1, l2, l3);
    printf("par: ");
    if(lista_vazia(l2))
        printf("-1\n");
    else
        imprimir_lista(l2);
    printf("impar: ");
    if(lista_vazia(l3))
    printf("-1\n");
    else
        imprimir_lista(l3);
    return 0;
}
