#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1, n2 ;

    int *ponteiro_n1 = &n1;
    int *ponteiro_n2 = &n2;

    if(ponteiro_n1 > ponteiro_n2){
        printf("O maior endereço eh: %p\n", ponteiro_n1);
    } else {
        printf("O maior endereço eh: %p\n", ponteiro_n2);
    }

    return 0;

}