#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int** criar_matriz(int l, int c, int mat1[l][c], int mat2[l][c])
{
    int i, j; 
    int **mat;
    mat=(int**) malloc(l*sizeof(int*));
    for(i=0; i<l; i++)
        mat[i]=(int*) malloc(c*sizeof(int));
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            mat[i][j]=mat1[i][j]+mat2[i][j];
    }
    return mat;
}

int main() {
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    int mat1[l][c], mat2[l][c];
    
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &mat1[i][j]);
    }
    
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &mat2[i][j]);
    }
    int **mat=criar_matriz(l, c, mat1, mat2);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    free(mat);
}
