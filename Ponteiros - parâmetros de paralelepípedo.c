#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void medidas(float a, float l, float c, 
             float *area, float *vl, float *cp){
    *area=(2*a*l)+(2*a*c)+(2*l*c);
    *vl=a*l*c;
    *cp=sqrt(((a*a)+(l*l)+(c*c)));
}

int main(){
    float alt, larg, comp;
    float area, vol, compd;
    scanf("%f %f %f", &alt, &larg, &comp);
    medidas(alt, larg, comp, &area, &vol, &compd);
    printf("area: %.1f\n", area);
    printf("volume: %.1f\n", vol);
    printf("comprimento da diagonal: %.1f", compd);
    return 0;
}
