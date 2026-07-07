#include <stdio.h>

/*
        Aula 27
        operador de incremento ++
*/

int main(void) {
    int contador = 10;

    // sinonimas
    contador++;
    contador += 1;
    contador = contador + 1;
    printf("\nValor: %d", ++contador);

    return 0;
}
