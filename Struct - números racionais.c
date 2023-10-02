#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int numerador;
    int denominador;
}numRacional;

numRacional divisaoRacional(numRacional a, numRacional b)
{
    numRacional num3;
    num3.numerador=a.numerador*b.denominador;
    num3.denominador=a.denominador*b.numerador;
    return num3;
}

int main()
{
    numRacional num1, num2, resultado;

    scanf("%d %d", &num1.numerador, &num1.denominador);
    scanf("%d %d", &num2.numerador, &num2.denominador);
    resultado=divisaoRacional(num1, num2);
    printf("%d %d", resultado.numerador, resultado.denominador);

    return 0;
}
