#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ordenarSTring(char *vet[], int tam)
{
    int i, j, p, r;
    char aux[20];
    for(i=tam-1; i>=1; i--)
    {
        p = i;
        for(j=0; j<i; j++)
        {
            r=strcmp(vet[j], vet[p]);
            if(r>0)
                p=j;
        }
        strcpy(aux, vet[i]);
        strcpy(vet[i], vet[p]);
        strcpy(vet[p], aux);
    }
    for(j=0; j<tam; j++)
        printf("%s\n", vet[j]);
}

char** create_matrix(int n)
{
    int i; 
    char **mat;
    mat = (char**) malloc(n*sizeof(char*));
    for (i = 0; i < n; i++)
        mat[i] = (char*) malloc(20*sizeof(char));
    return mat;
}

int main ()
{
    int tam, x=0;
    scanf("%d", &tam);
    char *nome;
    char **vet=create_matrix(tam);

    do
    {
        nome=(char*)(malloc(sizeof(char)*100));
        scanf("%s", nome);
        strcpy(vet[x], nome);
        x++;
    } while(x<tam);
    ordenarSTring(vet, tam);
}
