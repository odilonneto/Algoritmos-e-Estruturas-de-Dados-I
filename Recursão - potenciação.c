#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int potencia(int num1, int num2){
    if(num2==0)
        return 1;
    else
       return num1 * potencia(num1, (num2-1));
}
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", potencia(n1, n2));
    return 0;
}
