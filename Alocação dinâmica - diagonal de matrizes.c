#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* diagonal(int n, int mat[n][n])
{
    int *vet=(int*) malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
        vet[i]=mat[i][i];
    return vet;
}


int main() {
    int n;
    scanf("%d", &n);
    int mat[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    }
    int *vet=diagonal(n, mat);
    for(int i=0; i<n; i++)
        printf("%d ", vet[i]);
}
