#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 142: Matriz de Strings na linguagem de programação C
*/

int main() {

    char nomes[5][50];
    int l;

    for (l = 0; l < 5; l++) {
        printf("Digite o nome da posiçao %d. ",l);
        fgets(nomes[l], 50, stdin);
        //scanf("%50[^\n]",nomes[l]);
        //scanf("%c");
    }

    for (l = 0; l < 5; l++) {
        printf("%s", nomes[l]);
    }


    return 0;
}