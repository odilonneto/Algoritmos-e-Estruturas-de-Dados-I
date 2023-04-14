#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int e;
    int d;
    int f;
}Personagem;

void batalha(Personagem p1, Personagem p2, int n)
{
    int i, x, y;
    for(i=0; i<n; i++)
    {
        x=p1.f-p2.d;
        y=p2.f-p1.d;
        
        if(x>0 && p1.e>0)
            p2.e=p2.e-x;
        else if(x<=0 && p1.e>0)
            p2.e=p2.e-1;
        if(p2.e<0)
            p2.e=0;
        
        if(y>0 && p2.e>0)
            p1.e=p1.e-y;
        else if(y<=0 && p2.e>0)
            p1.e=p1.e-1;   
        if(p1.e<0)
            p1.e=0;
    }
    
    printf("%s %d\n%s %d", p1.nome, p1.e, p2.nome, p2.e);
    if(p1.e>p2.e)
        printf("\n%s", p1.nome);
    else if(p1.e==p2.e)
        printf("\nempate");
    else
        printf("\n%s", p2.nome);
}

int main(){
    int num;
    Personagem p1, p2;
    scanf("%s %d %d %d", &p1.nome, &p1.e, &p1.d, &p1.f);
    scanf("%s %d %d %d", &p2.nome, &p2.e, &p2.d, &p2.f);
    scanf("%d", &num);
    batalha(p1, p2, num);
    return 0;
}
