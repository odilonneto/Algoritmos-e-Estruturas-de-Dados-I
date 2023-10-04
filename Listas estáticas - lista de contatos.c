#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    char item[100][100];
    int tam;
}Lista;

Lista* criar_lista(){
    Lista *l=(Lista*)(malloc(sizeof(Lista)));
    l->tam=0;
    return l;
}

int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == 100);
}

int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

int inserir(Lista *l, char chave[]){
    if(!lista_cheia(l)){
        strcpy(l->item[l->tam], chave);
        l->tam++;
        return 1;
    }
    return 0;
}

void procurar_imprimir(Lista *l, char key[]){
    int i, k;
    for(i=0; i<l->tam; i++)
        if(strstr(l->item[i], key))
            printf("%s\n", l->item[i]);

}
int liberar(Lista *L){
    if (L != NULL){
        free(L);
        return 1;
    }
    return 0;
}

int main(){
    int i, quant;
    char *procura, *contato;
    Lista *lista;
    procura=(char*)(malloc(sizeof(char)*100));
    scanf("%s", procura);
    scanf("%d", &quant);
    fflush(stdin);
    lista=criar_lista();
    for(i=0; i<quant; i++){
        contato=(char*)(malloc(sizeof(char)*100));
        scanf("%s", contato);
        inserir(lista, contato);
        liberar(contato);
    }
    procurar_imprimir(lista, procura);
    liberar(lista);
    return 0;
}
