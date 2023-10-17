#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void refazer(char **vet, int esq, int dir)
{
    int j=(esq+1)*2-1, r, t;
    char aux[100];
    strcpy(aux, vet[esq]);
    while(j<=dir)
    {
        r=strcmp(vet[j], vet[j+1]);
        if((j<dir) && (r<0))
            j++;
        t=strcmp(aux, vet[j]);
        if(t>0)
            break;
        strcpy(vet[esq], vet[j]);
        esq=j;
        j=(esq+1)*2-1;
    }
    strcpy(vet[esq], aux);
}

void gerarHeap(char **vet, int tam)
{
    int esq=tam/2;  
    while(esq>=0)
    {
        refazer(vet, esq, tam-1);
        esq--;
    }
}

void heapsort(char **vet, int tam)
{
    int dir=tam;
    char aux[100];
    gerarHeap(vet, tam);
    while(dir>0)
    {
        strcpy(aux, vet[0]);
        strcpy(vet[0], vet[dir]);
        strcpy(vet[dir], aux);
        dir--;
        refazer(vet, 0, dir);
    }
    if(strcmp(vet[tam], vet[tam-1])<0)
        heapsort(vet, tam);
}

char** create_matrix(int n)
{
    int i; 
    char **mat;
    mat=(char**)malloc(n*sizeof(char*));
    for (i=0; i<n; i++)
        mat[i]=(char*)malloc(100*sizeof(char));
    return mat;
}

int main()
{
    int tam, x=0;
    scanf("%d", &tam);
    char **vet=create_matrix(tam);

    do
    {
        scanf("%s", vet[x]);
        x++;
    } while(x<tam);

    heapsort(vet, tam-1);
    for(int j=0; j<tam; j++)
        printf("%s\n", vet[j]);
    return 0;
}
