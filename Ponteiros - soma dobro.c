#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float soma_dobro(float *A, float *B, float *C)
{
    *A=*A*2;
    *B=*B*2;
    *C=*C*2;
    return (*A)+(*B)+(*C);
}

int main(){
    int n;
    float a, b, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        printf("A=%.1f B=%.1f C=%.1f SOMA=%.1f\n", a, b, c, soma_dobro(&a, &b, &c));
    }
}
