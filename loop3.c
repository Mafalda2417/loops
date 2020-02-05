#include <stdio.h>

int main(){
    int n[11];
    int i;
    int soma;

    for(i = 0; i < 11; i++){
        n[i] = i;
        printf("Elemento[%d]: %d\n", i, n[i]);
        soma = soma + n[i];
    }
        printf("Soma: %d\n", soma);
    
    return 0;
}