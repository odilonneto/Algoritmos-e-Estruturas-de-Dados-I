#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char* nome;
    char* curso;
    float coef;
}Aluno;

void selectsort(Aluno *vet, int tam){
    int i, j, p, r;
    Aluno aux;
    for(i=tam-1; i>=1; i--){
        p = i;
        for(j=0; j<i; j++){
            r=strcmp(vet[j].nome, vet[p].nome);
            if(r>0 || (r==0 && vet[j].matricula > vet[p].matricula))
                p=j;
        }
        aux=vet[i];
        vet[i]=vet[p];
        vet[p]=aux;
    }
}

void imprimir(Aluno *vet, int tam){
    int i;
    for(i=0; i<tam; i++)
        printf("%s %d %s %.2f\n", vet[i].nome, vet[i].matricula, vet[i].curso, vet[i].coef);
}

int main(){
    int tam, x=0;
    scanf("%d", &tam);
    Aluno *vet=(Aluno*)(malloc(sizeof(Aluno)*tam));

    do
    {
        vet[x].nome=(char*)(malloc(sizeof(char)*50));
        vet[x].curso=(char*)(malloc(sizeof(char)*50));
        scanf("%d", &vet[x].matricula);
        scanf("%s", vet[x].nome);
        scanf("%s", vet[x].curso);
        scanf("%f", &vet[x].coef);
        x++;
    }while(x<tam);

    selectsort(vet, tam);
    imprimir(vet, tam);
    return 0;
}
