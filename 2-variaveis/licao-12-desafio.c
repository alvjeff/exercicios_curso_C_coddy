/*
Escreva um programa que declare e inicialize duas variáveis com nomes válidos de acordo com as regras de nomenclatura da linguagem C. 
A primeira variável deve ser um inteiro chamada "userAge" definida como 25. A segunda variável deve ser um número de ponto flutuante chamada "item_price" definida como 9.99. 
*/
#include <stdio.h>

int main() {
    // Declara e inicializa duas variáveis com nomes válidos
    int userAge = 25;
    float item_price = 9.99f;

    // Imprime ambas as variáveis
    printf("User age: %d\n", userAge);
    printf("Item price: %.2f\n", item_price);
    return 0;
}



