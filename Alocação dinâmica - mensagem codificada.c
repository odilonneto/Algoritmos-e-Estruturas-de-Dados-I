#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* atualizar(int *vetNum, char *vetChar, int num){
    int i, x;
    char *vet;

    vet=(char*)(malloc(num*sizeof(char)));
    for(i=0; vetNum[i]!=-1; i++){
        x=vetNum[i];
        if(x==1)
            vet[i]=vetChar[0];
        else
            vet[i]=vetChar[x-1];
    }
    return vet;
}
int main (){
    int x, i, cont=0,*vetNum;
    char *vetChar, *vetChar2;

    vetChar=(char*)(malloc(100*sizeof(char)));
    gets(vetChar);

    vetNum=(int*)(malloc(100*sizeof(int)));
    for(i=0; vetNum[i-1]!=-1; i++){
        scanf("%d", &vetNum[i]);
        cont++;
    }
    vetChar2=(char*)(malloc(cont*sizeof(char)));
    vetChar2=atualizar(vetNum, vetChar, cont);
    for(i=0; vetChar2[i]!='\0'; i++)
        printf("%c", vetChar2[i]);
    return 0;
}
