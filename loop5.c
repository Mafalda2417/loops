#include <stdio.h>

int main()
{
    int tabuada = 0;
    printf("Digite a tabuada que você deseja: ");
    scanf("%d", &tabuada);

    for(int x = 1; x<=10; ++x){
        printf("%d x %d = %d\n", x, tabuada, x * tabuada);
    }

    return 0;
}