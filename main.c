#include <stdio.h>

/*
        Aula 19
    operador long para o tipo int
    %li / %ld
*/

int main(void) {
    long long int y = 2147483647;
    printf("tamanho de um int na memoria: %d bytes\n", sizeof y);
    y++;
    printf("tamanho em memoria de um  int: %lli\n", y);
    return 0;
}
