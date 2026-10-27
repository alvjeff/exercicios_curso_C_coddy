//DESAFIO INCREMENTO/DECREMENTO

#include <stdio.h>

int main() {
    // Escreva seu código aqui
    int number = 10;
    int prefixResult = ++number;
    int postfixResult = number++;

    printf("Number: %d\n", number);
    printf("Prefix result: %d\n", prefixResult);
    printf("Postfix result: %d\n", postfixResult);
    return 0;
}

/*
Desafio
Fácil

Crie um programa que:

    Declare uma variável inteira chamada number com um valor inicial de 10
    Use o operador de incremento de prefixo para aumentar number em 1 e atribua o resultado a uma variável chamada prefixResult
    Use o operador de incremento de sufixo em number e atribua o resultado a uma variável chamada postfixResult
    Imprima o valor final de number, prefixResult e postfixResult neste formato exato:

Number: [value]
Prefix result: [value]
Postfix result: [value]
*/