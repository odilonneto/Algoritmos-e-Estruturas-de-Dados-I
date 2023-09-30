#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int** criar_matriz(int l, int c){ 
    int **mat;
    mat=(int**) malloc(l*sizeof(int*));
    for(int i=0; i<l; i++)
        mat[i]=(int*) malloc(c*sizeof(int));
    return mat;
}

void ordenar(int **mat, int l, int c){
    int i, j, aux, cont=0;
    
    while(cont<l)
    {
        for(i=0; i<c; i++)
        {
            for(j=0; j<c-i-1 ; j++)
            {
                if(mat[cont][j] < mat[cont][j+1])
                {
                    aux=mat[cont][j];
                    mat[cont][j]=mat[cont][j+1];
                    mat[cont][j+1]=aux;
                }
            }
        }
        cont++;
    }
}

void liberar_mat(int **mat, int l){
    for(int i=0; i<l; i++)
        free(mat[i]);
    free(mat);
}
    

int main(){
    int l, c;
    scanf("%d %d", &l, &c);
    int **mat=criar_matriz(l, c);
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<c; j++)
            scanf("%d", &mat[i][j]);
    }
    ordenar(mat, l, c);
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    liberar_mat(mat, l);
    return 0;
}
