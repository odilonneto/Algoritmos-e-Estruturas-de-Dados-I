#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mult(int num, int num2){
    if(num==0 || num2==0)
        return 0;
    else
       return num + mult(num, (num2-1));
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", mult(n1, n2));
    return 0;
}
