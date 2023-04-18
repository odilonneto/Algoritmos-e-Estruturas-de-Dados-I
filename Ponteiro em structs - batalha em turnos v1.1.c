#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    int A1;
    int A2;
    int A3;
}Golpes;

typedef struct{
    char nome[100];
    int energia;
    int defesa;
    int forca;
    Golpes g;
}Personagem;

int calculo(Personagem *P1, Personagem *P2, int g)
{
    int dano=0;
    if(P1->energia>0)
    {
        if(g==1)
            dano=(P1->forca+P1->g.A1)-(P2->defesa);
        else if(g==2)
            dano=(P1->forca+P1->g.A2)-(P2->defesa);
        else if(g==3)
            dano=(P1->forca+P1->g.A3)-(P2->defesa);
        if(dano<=0)
            dano=1;
    }
    return dano;
}

void reduzir_energia(Personagem *Persn, int d)
{
    if(Persn->energia > 0)
        Persn->energia=Persn->energia-d;
    if(Persn->energia < 0)
          Persn->energia=0;
}

void cura_energia(Personagem *Persn)
{
    if(Persn->energia<1000)
        Persn->energia=Persn->energia+200;
    if(Persn->energia>1000)
        Persn->energia=1000;
}

void vencedor(Personagem *P1, Personagem *P2)
{
    printf("%s %d\n%s %d\n", P1->nome, P1->energia, 
           P2->nome, P2->energia);
    if( P1->energia > P2->energia)
        printf("%s", P1->nome);
    else if(P1->energia < P2->energia)
        printf("%s", P2->nome);
    else if(P1->energia == P2->energia)
        printf("empate");
}

int main(){
    Personagem p1, p2;
    int n, golp, pers;
    char tipo;
    scanf("%s %d %d %d %d %d %d", p1.nome, &p1.energia, &p1.defesa, 
          &p1.forca, &p1.g.A1, &p1.g.A2, &p1.g.A3);
    scanf("%s %d %d %d %d %d %d", p2.nome, &p2.energia, &p2.defesa, 
          &p2.forca, &p2.g.A1, &p2.g.A2, &p2.g.A3);
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &pers);
        scanf(" %c", &tipo);
        if(tipo=='A')
        {
            scanf(" %d", &golp);
            if(pers==1 && p1.energia>0)
                reduzir_energia(&p2, calculo(&p1, &p2 , golp));
            else if(pers==2 && p2.energia>0)
                reduzir_energia(&p1, calculo(&p2, &p1, golp));
        }
        else
        {
            if(pers==1)
                cura_energia(&p1);
            else
                cura_energia(&p2);
        }
    }
    vencedor(&p1, &p2);
    return 0;
}
