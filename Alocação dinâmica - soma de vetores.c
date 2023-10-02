#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* soma(int *v1, int n1, int *v2, int n2){
    int i, *vet;
    if(n1>=n2){
        vet=(int*)(malloc(n1*sizeof(int)));
        for(i=0; i<n1; i++){
            vet[i]=v1[i]+v2[i];
            if(i>=n2)
                vet[i]=v1[i];
        }
    }
    else
    {
        vet=(int*)(malloc(n2*sizeof(int)));
        for(i=0; i<n2; i++){
            vet[i]=v1[i]+v2[i];
            if(i>=n1)
                vet[i]=v2[i];
        }
    }
    return vet;
}

int main ()
{
    int i, *vet1, *vet2, *vet3, num1, num2;

    scanf("%d", &num1);
    vet1=(int*)(malloc(num1*sizeof(int)));
    for(i=0; i<num1; i++)
        scanf("%d", &vet1[i]);

    scanf("%d", &num2);
    vet2=(int*)(malloc(num2*sizeof(int)));
    for(i=0; i<num2; i++)
        scanf("%d", &vet2[i]);
    
    if(num1>=num2)
        vet3=(int*)(malloc(num1*sizeof(int)));
    else
        vet3=(int*)(malloc(num2*sizeof(int)));
    
    vet3=soma(vet1, num1, vet2, num2);
    for(i=0; (i<num1 || i<num2); i++)
        printf("%d ", vet3[i]);
    return 0;
}
