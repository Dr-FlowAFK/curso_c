#include <stdio.h>
#include <stdlib.h>


/*
        Aula 192: Exercicio 1

    1) Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços
    de duas variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior
    valor do vetor.
*/
void maior_menor(int *vet,int tam, int *menor, int *maior) {
    int i;
    *menor = *vet;
    *maior = *vet;
    for (i=1;i<tam;i++) {
        if (*menor > *(vet + i)) {
            *menor = *(vet + i);
        }
        if (*maior < *(vet + i)) {
            *maior = *(vet + i);
        }
    }
}
int main() {
    int menor,maior, v[10] = {34,234,34,12,4,5435,324,45,43,133};
    printf("Maior valor: %d\n",maior);
    printf("Menor valor: %d\n",menor);

    maior_menor(v,10,&menor,&maior);

    printf("Maior valor: %d\n",maior);
    printf("Menor valor: %d\n",menor);

    return 0;
}