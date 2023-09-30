#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Cell Cell;
struct Cell{
    int item;
    int col;
    Cell *next;
};

typedef struct{
        Cell *head;
}ListaE;

typedef struct{
       int n_lin;
       int n_col;
       ListaE **lin;
}Spa_Mat;

Spa_Mat* criar(int l, int c){
    Spa_Mat* mat = (Spa_Mat*) malloc(sizeof(Spa_Mat));
    int i;
    mat->n_col = c;
    mat->n_lin = l;
    mat->lin = (ListaE**) malloc(sizeof(ListaE*) * l);
    for (i = 0; i < l; i++){
            mat->lin[i] = (ListaE*) malloc(sizeof(ListaE));
            mat->lin[i]->head = NULL;
    }
    return mat;
}

Cell* criar_celula(int item, int col){
    Cell *nova = (Cell*) malloc(sizeof(Cell));
    nova->item = item;
    nova->col = col;
    nova->next = NULL;

    return nova;
}

void inserir(int key, Spa_Mat *m, int l, int c)
{
    Cell *aux;
    if(m == NULL)
    {
        m=criar(l, c);
    }
    aux = criar_celula(key, c);

    Cell *auxB=m->lin[l]->head;
    Cell *auxC=NULL;
    while(auxB!=NULL && auxB->col<c)
    {
        auxC=auxB;
        auxB=auxB->next;
    }

    if(auxC == NULL)
    {
        if(auxB!=NULL)
            aux->next=auxB;
        m->lin[l]->head=aux;
    }
    else
    {
        auxC->next=aux;
        aux->next=auxB;
    }
}

void imprimir(Spa_Mat* mat){
    int i, j;
    Cell* aux;
    for (i = 0; i < mat->n_lin; i++){
        aux = mat->lin[i]->head;
        j = 0;
        while (aux != NULL){
            while (j < aux->col){
                printf("0 ");
                j++;
            }
            printf("%d ", aux->item);
            j++;
            aux = aux->next;
        }
        for (j; j < mat->n_col; j++)
            printf("0 ");
        printf("\n");
    }
}

Spa_Mat* converter(int**mat, int linha, int coluna)
{
    Spa_Mat *matE=criar(linha, coluna);
    int i, j;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(mat[i][j]!=0)
                inserir(mat[i][j], matE, i, j);
        }
    }
    return matE;
}

int* soma_linha(Spa_Mat *m)
{
    int i,j, soma;
    Cell* aux;
    int *v=(int*)malloc(m->n_col*sizeof(int));
    for(i=0; i<m->n_col; i++)
    {
        soma=0;
        for(j=0; j<m->n_lin; j++)
        {
            aux = m->lin[j]->head;
            if(aux==NULL)
                soma=0;
            while(aux!=NULL)
            {
                if(aux->col==i)
                    soma=soma+aux->item;
                aux=aux->next;
            }
        }
        v[i]=soma;
    }
    return v;
}

int** criar_matriz(int l, int c){ 
    int **mat;
    mat=(int**) malloc(l*sizeof(int*));
    for(int i=0; i<l; i++)
        mat[i]=(int*) malloc(c*sizeof(int));
    return mat;
}

void liberar_mat(int **mat, int l){
    for(int i=0; i<l; i++)
        free(mat[i]);
    free(mat);
}

int main(){
    int i, j, l, c;
    scanf("%d %d", &l, &c);
    int **mat=criar_matriz(l, c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    Spa_Mat *matrix = criar(l, c);
    matrix=converter(mat, l, c);
    int *vet=soma_linha(matrix);
    for(i=0; i<c; i++)
        printf("%d ", vet[i]);
    liberar_mat(mat, l);
    free(vet);
    return 0;
}
