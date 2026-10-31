#include <stdio.h>

int main() {
    // Declarar e inicializar variáveis
    int num1 = 25;
    int num2 = 7;

    // Calcular operações aritméticas
    int soma = num1 + num2;
    int dif = num1 - num2;
    int prod = num1 * num2;
    int quoc = num1 / num2;
    int rest = num1 % num2;

    // Imprimir resultados aritméticos
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Sum: %d\n", soma);
    printf("Difference: %d\n", dif);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quoc);
    printf("Remainder: %d\n", rest);

    // Calcular operações lógicas
    int result1 = (num1 > num2 && (num1 % 2  == 1));
    int result2 = (num2 < 10 || (num1 % 2) == 0);

    // Imprimir resultados de operações lógicas
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);

    return 0;
}


/**
 */