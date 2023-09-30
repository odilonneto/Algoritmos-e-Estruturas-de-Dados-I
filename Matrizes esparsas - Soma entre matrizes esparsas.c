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

static int validar_pos_matriz(int lin, int col, Spa_Mat* mat){
    return (mat != NULL) && (lin >= 0) && (lin < mat->n_lin) && (col >= 0) && (col < mat->n_col);
}

int buscar_pos(int l, int c, Spa_Mat* mat){
    Cell *aux;
    int valor = 0;

    if ((mat != NULL) && validar_pos_matriz(l, c, mat)){
        aux = mat->lin[l]->head;

        while(aux != NULL)
        {
            if(c == aux->col)
                valor = aux->item;
            aux = aux->next;
        }
    }
    return valor;
}


Spa_Mat *soma_matriz(Spa_Mat *mat1, Spa_Mat *mat2){
    int i, j, x, y;
    Spa_Mat *m=criar(mat1->n_lin, mat1->n_col);
    for(i=0; i<m->n_lin; i++)
    {
        for(j=0; j<m->n_col; j++)
        {
            x=buscar_pos(i, j, mat1);
            y=buscar_pos(i, j, mat2);
            if(x+y!=0)
                inserir(x+y, m, i, j);
        }
    }
    return m;
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
    int i, j, l, c, x;
    scanf("%d %d", &l, &c);
    Spa_Mat *matrix1=criar(l, c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &x);
            if(x!=0)
                inserir(x, matrix1, i, j);
        }
    }
    scanf("%d %d", &l, &c);
    Spa_Mat *matrix2=criar(l, c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &x);
            if(x!=0)
                inserir(x, matrix2, i, j);
        }
    }
    Spa_Mat *matrix=soma_matriz(matrix1, matrix2);
    imprimir(matrix);
    return 0;
}
