/*
Desafio Fácil

Crie um programa que demonstre a conversão de tipos entre diferentes tipos de dados numéricos:

    Declare uma variável int chamada smallNumber com o valor 42
    Declare uma variável float chamada mediumNumber com o valor 123.456
    Declare uma variável double chamada largeNumber
    Use a conversão implícita para converter smallNumber em largeNumber (simplesmente atribua smallNumber a largeNumber; nenhuma sintaxe de conversão é necessária)
    Imprima largeNumber com a mensagem "Small to large: " usando printf e uma casa decimal
    Use a conversão implícita para converter mediumNumber em largeNumber (novamente, uma atribuição simples)
    Imprima largeNumber com a mensagem "Medium to large: " usando printf e uma casa decimal


*/

#include <stdio.h>

int main() {
    // Escreva seu código aqui
    //1
    int smallNumber = 42;
    //2
    float mediumNumber = 123.456;
    //3
    double largeNumber;
    //4
    largeNumber = smallNumber;
    //5
    printf("Small to large: %.1f\n", largeNumber);
    //6
    largeNumber = mediumNumber;
    printf("Medium to large: %.1f\n", largeNumber);
    return 0;
}