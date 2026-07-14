#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <math.h>
/*
    Aula 149:   Procedimento imprimir matriz. Função para somar linha da matriz
*/
int tam = 5;
void imprimir(int m[][5]) {
    int i,j;
    for (i=0;i<tam;i++) {
        for (j=0;j<tam;j++) {
            printf("%2d ",m[i][j]);
        }
        printf("\n");
    }
}

int somar_linha(int m[][5],int l) {
    int c, soma = 0;
    for (c=0;c<tam;c++) {
        soma += m[l][c];
    }
    return soma;
}

int main() {
    int mat[5][5];
    int i,j;
    srand(time(NULL));
    for (i=0;i<tam;i++) {
        for (j=0;j<tam;j++) {
            mat[i][j] = rand() % 10;
        }
    }

    imprimir(mat);
    printf("Soma da linha 0: %d",somar_linha(mat,0));
    return 0;
}