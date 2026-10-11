#include <stdio.h>

int main() {
    // Escreva seu código aqui
    double temperature = 98.6;
    int whole_part = (int) temperature;

    printf("Original temperature: %.1f\n", temperature);
    printf("Whole part: %d\n", whole_part);
    return 0;
}

/*
Desafio
Fácil

Escreva um programa que:

    Declare uma variável do tipo double chamada temperature e atribua a ela o valor 98.6.
    Use coerção de tipo explícita para converter temperature em um inteiro e armazene-o em uma variável chamada whole_part.
    Imprima a temperatura original e a parte inteira em linhas separadas.
*/