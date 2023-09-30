#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    unsigned int tam;
    int*buckets;
}HashT;

HashT *criar(unsigned int tam){
    HashT *t = malloc(sizeof(HashT));
    int i;
    t->tam = tam;
    t->buckets = malloc(tam * sizeof(int));
    for (i= 0; i<tam; i++)
        t->buckets[i] = -1;
    return t;
}

void inserir(int key, float c, HashT *t){
    int x, y, i, rh;
    if ((t != NULL) && (key > 0)){
        x=(int)(((key*c)-(int)(key*c))*t->tam); 
        if (t->buckets[x] <= 0)
        {
            t->buckets[x] = key;
            printf("%d\n", x);
            return;
        }else
        {
            i=1;
            rh=x;
            y=1+key%(t->tam-1);
            while((i < t->tam) && (t->buckets[rh] != key) && (t->buckets[rh] > 0))
            {
                rh=(int)(x+i*y%t->tam); 
                i++; 
            }
            if ((i < t->tam) && (t->buckets[rh] <= 0))
            {
                t->buckets[rh] = key;
                printf("%d\n", rh);
                return;
            }
        }
    }
}

int liberar(HashT *t){
    if (t != NULL){
        free(t->buckets);
        free(t);
        return 1;
    }
    return 0;
}

int main(){
    int i=0, tamT, quant, x;
    float constant;
    scanf("%f %d", &constant, &tamT);
    HashT *tF=criar(tamT);
    scanf("%d", &quant);
    do
    {
        scanf("%d", &x);
        inserir(x, constant, tF);
        i++;
    }while(i<quant);
    liberar(tF);
    return 0;
}
