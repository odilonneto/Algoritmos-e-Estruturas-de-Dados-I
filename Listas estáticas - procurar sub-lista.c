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
    if(!lista_cheia(l))
    {
        l->item[l->tam]=chave;
        l->tam++;
        return 1;
    }
    return 0;
}

int liberar_lista(Lista *l){
    if(l!=NULL)
    {
        free(l);
        return 1;
    }
    return 0;
}

int sub_lista(Lista *l1, Lista *l2)
{
    int i, j, x=0, n;
    for(i=0; i<l1->tam; i++)
    {
        n=i;
        for(j=0; j<l2->tam; j++)
        {
            if(l1->item[n]==l2->item[j])
                x++;
            n++;
        }
        if(x==l2->tam)
            return i;
        else
            x=0;
    }
    return -1;
}

int main(){
    int aux;
    Lista *l1, *l2;
    l1=criar_lista();
    l2=criar_lista();
    do
    {
        scanf("%d", &aux);
        if(aux>0)
           inserir(l1, aux);
    }while(aux!=-1);
    do
    {
        scanf("%d", &aux);
        if(aux>0)
           inserir(l2, aux);
    }while(aux!=-1);
    printf("%d", sub_lista(l1, l2));
    liberar_lista(l1);
    liberar_lista(l2);
    return 0;
}
