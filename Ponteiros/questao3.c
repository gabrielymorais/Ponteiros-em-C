#include <stdio.h>
#include <stdlib.h>


int main() {
    float array[10];

    for (int i = 0; i < 10; i++) {
        printf("O endereço de array[%d] é: %p\n", i, &array[i]);
    }

    return 0; 
}