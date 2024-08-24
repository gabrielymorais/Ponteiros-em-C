#include <stdio.h>
#include <stdlib.h>

int main(){
    int x1, x2;
    printf("Digite um numero para x1: ");
    scanf("%d", &x1);
    printf("Digite um numero para x2: ");
    scanf("%d", &x2);

    if (&x1 > &x2) {
        printf("O maior endereço é x1, que contém o valor: %d\n", x1);
    } else {
        printf("O maior endereço é o de x2, que contém o valor: %d\n", x2);
    }
    return 0;
}