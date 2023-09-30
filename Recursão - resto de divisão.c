#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int resto(int a, int b){
    if(a==0 || b==1)
        return 0;
    else if(a<b)
        return a;
    else
        return resto(a-b, b);
}

int main(){
    int i, n, x, y;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", resto(x, y));
    }
    return 0;
}
