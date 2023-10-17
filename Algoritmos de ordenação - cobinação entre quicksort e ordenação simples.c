#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

void quicksort(int vet[], int esq, int dir, int part, int tamU){
    int i=esq, j=dir, pivo=vet[(i+j)/2], aux;
    
    if((dir-esq+1>part) || (tamU/part)%2==0)
    {
        do
        {
            while(vet[i] < pivo)
                i++;
            while(vet[j] > pivo)
                j--;
    
            if(i <= j)
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
                i++;
                j--;
            }
        }while(i <= j);
    
        if (j > esq)
            quicksort(vet, esq, j, part, dir-esq);
        if (i < dir)
            quicksort(vet, i, dir, part, dir-esq);
    }
    else
    {
        for(i=0; i<tamU-1; i++)
        {
            j=0;
            while(j!=tamU-i-1)
            {
                if(vet[j] > vet[j+1])
                {
                    aux=vet[j];
                    vet[j]=vet[j+1];
                    vet[j+1]=aux;
                }
                j++;
            }
        }
    }
}

int main ()
{
    int tam, part, x;
    scanf("%d", &tam);
    int vet[tam];

    for(x=0; x<tam; x++)
        scanf("%d", &vet[x]);
    scanf("%d", &part);
    quicksort(vet, 0, tam-1, part, tam);
    for(x=0; x<tam; x++)
        printf("%d ", vet[x]);
    return 0;
}
