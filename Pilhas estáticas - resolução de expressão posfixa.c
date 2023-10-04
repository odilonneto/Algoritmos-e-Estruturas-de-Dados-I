#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

typedef struct{
    float item[100];
    int topo;
}Pilha;

Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}
int pilha_cheia(Pilha *p){
    if(p == NULL)
        return -1;
    else if (p->topo == (100 - 1))
        return 1;
    else
        return 0;
}
int pilha_vazia(Pilha *p){
    if(p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}
int empilhar(Pilha *p, float item){
    if (p == NULL)
        p = criar_pilha();
    if (!pilha_cheia(p)){
        p->topo++;
        p->item[p->topo]=item;
        return 1;
    }
    return 0;
}
int desempilhar (Pilha *p){
    int item = INT_MIN;
    if (!pilha_vazia(p)){
        item = p->item[p->topo];
        p->topo--;
    }
    return item;
}
void imprimir_pilha(Pilha *p){
    Pilha aux = *p;
    int item;
    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);
        printf("%d", item);
    }
}
void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}
float resolver_expressao(char exp[])
{
    Pilha *P=criar_pilha();
    int i, x=strlen(exp);
    for(i=0; i<x; i++)
    {
        float aux=0, aux2=0;
        if(exp[i]>='0' && exp[i]<='9')
            empilhar(P, exp[i]);
        else
        {
            switch(exp[i])
            {
                case '+':
                    aux=desempilhar(P)-48;
                    aux2=desempilhar(P)-48;
                    empilhar(P, (aux2+aux)+48);
                    break;
                case '-':
                    aux=desempilhar(P)-48;
                    aux2=desempilhar(P)-48;
                    empilhar(P, (aux2-aux)+48);
                    break;
                case '*':
                    aux=desempilhar(P)-48;
                    aux2=desempilhar(P)-48;
                    empilhar(P, (aux2*aux)+48);
                    break;
                case '/':
                    aux=desempilhar(P)-48;
                    aux2=desempilhar(P)-48;
                    empilhar(P, (aux2/aux)+48);
                    break;
                default:
                    printf("Opcao invalida.");
            }
        }
    }
    return P->item[P->topo]-48;
}
int main (){
    float resultado;
    char *expressao=(char*)(malloc(sizeof(char)*100));
    scanf("%s", expressao);
    resultado=resolver_expressao(expressao);
    printf("%.0f", resultado);
    return 0;
}
