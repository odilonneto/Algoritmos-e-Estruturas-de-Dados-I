/*Struct - Implemente um programa que faça o controle do consumo de energia dos eletrodomésticos de um imóvel.
Primeiro os N eletrodomésticos que contendo nome, potência (kW) e tempo ativo por dia (horas). Em seguida, 
leia um número inteiro d (dias) e calcule:
O consumo total no imovel;
O consumo total de cada eletrodoméstico; 
O consumo relativo de cada eletrodoméstico*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int p;
    float t;
}Eletro;

void controle(Eletro vet[], int n, int d)
{
    int i;
    float total=0, x;
    for(i=0; i<n; i++) //for para calcular o consumo total 
        total+=vet[i].p*vet[i].t*d;
    printf("%.0f\n", total);
    for(i=0; i<n; i++) //for para calcular o consumo individual de cada eletrodoméstico
    {                  //e dividdir pelo consumo total, ou seja, consumo relativo
        x=((vet[i].p*vet[i].t*d)/total)*100;
        printf("%s %.1f\n", vet[i].nome, x);
    }
}

int main(){
    
    int qtd, dias;
    scanf("%d", &qtd);
    Eletro vet[qtd];
    for(int i=0; i<qtd; i++)
        scanf("%s %d %f", vet[i].nome, &vet[i].p, &vet[i].t);
    scanf("%d", &dias);
    controle(vet, qtd, dias);
    return 0;
}
