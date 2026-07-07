#include <stdio.h>

/*
    Aula 29
    operador unsigned
    trocar o %d por %u
    limite para o tipo int: 2.147.483.647
*/

int main(void) {
    unsigned int x = 4294967295;  // 0 ... 4.294.967.295
    int y = 2147483647;

    printf("x = %u\n", x);
    printf("y = %d\n", y);

    return 0;
}
