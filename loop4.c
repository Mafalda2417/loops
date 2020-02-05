#include <stdio.h>

int main(){
    int n[11];
    int i;
    float soma = 0;
    float media;

    for(i = 0; i < 11; i++){
        n[i] = i;
        printf("Elemento[%d]: %d\n", i, n[i]);
        soma = soma + n[i];
        media = soma / 10;
    }
        printf("Média: %.1f\n", media);
    
    return 0;
}