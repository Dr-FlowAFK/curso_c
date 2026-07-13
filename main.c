#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

/*
    Aula 140: Converter String para maiúsculo ou minúsculo com strupr e strlwr
*/

int main() {

    char palavra[50] = {"Bom dia simpatia!"};

    strlwr(palavra);
    strupr(palavra);
    printf("%s\n", palavra);
    return 0;
}