#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 157:    Calcular o enésimo termo da sequência de FIBONACCI com recursão
*/

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }else if (n == 2) {
        return 1;
    }else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("Fibonacci de numeros: %d\n",fibonacci(n));
    return 0;
}