#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
    Aula 106: Como criar uma matriz?
*/

int main(void) {
    int i;
    int num2[10]; // vetor
    int matriz[3][3] = {}; //matriz
    // tipo identificador
    int vet[10];

    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    /*
            c0 c1 c2
    linha 0  1  2  3
    linha 1  4  5  6
    linha 2  7  8  9
    */

    int mat2[][3] = {1,2,3,4,5,6,7};
    int mat3[3][3] = {0};
    srand(time(NULL));
    for(i = 0; i < 10; i++) {

        //num2[i] = rand();// gera uma sequancia pre moldada melhor pra testes
        num2[i] = 1 + rand() % 100;
    }
    printf("\n\n");
    for(i = 0; i < 10; i++)
        printf("%d ", num2[i]);
    printf("\n\n");

    return 0;
}
