#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int cod;
    char nome[255];
    float notas[3];
    float media;
}alunosDados;

float calcularMedia(alunosDados aluno[], int n){
    float mediageral;
    mediageral=(aluno[n].notas[0]+aluno[n].notas[1]+aluno[n].notas[2])/3;
    return mediageral;
}

int encontraMaiorMedia(alunosDados aluno[], int n){
    int i, maiorMedia=0, indice;
    for(i=0; i<n; i++){
        if(maiorMedia<aluno[i].media){
            maiorMedia=aluno[i].media;
            indice=i;
        }
    }
    return indice;
}

int encontraMenorMedia(alunosDados aluno[], int n){
    int i, indice;
    float menorMedia=aluno[0].media;
    for(i=1; i<n; i++){
        if(menorMedia>aluno[i].media){
            menorMedia=aluno[i].media;
            indice=i;
        }
    }
    return indice;
}

int encontraMaiorP1(alunosDados aluno[], int n){
    int i, maiorP=0, indice;
    for(i=0; i<n; i++){
        if(maiorP<aluno[i].notas[0]){
            maiorP=aluno[i].notas[0];
            indice=i;
        }
    }
    return indice;
}

int main (){
    int i, x, y, v, quantidade, mediaM;
    scanf("%d", &quantidade);
    alunosDados aluno[quantidade];
  
    for(i=0; i<quantidade; i++){
         scanf("%d", &aluno[i].cod);
         scanf("%s", &aluno[i].nome);
         scanf("%f %f %f", &aluno[i].notas[0], &aluno[i].notas[1], &aluno[i].notas[2]);
         aluno[i].media=calcularMedia(aluno,i);

    }
  
    for(i=0; i<quantidade; i++){
        if(aluno[i].media>6)
            printf("Aprovado!\n");
        else
            printf("Reprovado!\n");
    }
  
    x=encontraMaiorMedia(aluno, quantidade);
    printf("O aluno com maior media e: %d %s %.1f\n", aluno[x].cod, aluno[x].nome, aluno[x].media);
    y=encontraMenorMedia(aluno, quantidade);
    printf("O aluno com menor media e: %d %s %.1f\n", aluno[y].cod, aluno[y].nome, aluno[y].media);
    v=encontraMaiorP1(aluno, quantidade);
    printf("O aluno com maior P1 e: %d %s %.1f\n", aluno[v].cod, aluno[v].nome, aluno[v].notas[0]);
    return 0;
}
