#include <stdio.h>

int main() {
    int array[5];
    int *ponteiro;

    ponteiro = array;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para array[%d]: ", i);
        scanf("%d", ponteiro + i);
    }

    printf("O dobro de cada valor lido é:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i) * 2);  
    }

    return 0; 
}
