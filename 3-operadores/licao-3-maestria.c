//MODULO
#include <stdio.h>

int main() {
    int first, second;
    
    // Obter entrada do usuário
    scanf("%d", &first);
    scanf("%d", &second);
    
    // Calcular e exibir os resultados
    int remainder = first % second;
    int odd = (first + second) % 2;
    if (odd > 0) {
        odd = 1;
    }
    
    int divisible = (first / second) % 2;
    if (divisible > 0)
    {
        divisible = 1;
    }

    printf("Remainder: %d\n", remainder);
    printf("Sum is odd: %d\n", odd);
    printf("First is divisible by second: %d\n", divisible);
    
    return 0;
}

/*
Escreva um programa que:

    Receba dois números inteiros como entrada do usuário
    Calcule e imprima:
        O resto quando o primeiro número é dividido pelo segundo
        Se a soma dos dois números é par ou ímpar
        Se o primeiro número é divisível pelo segundo (sem resto)
*/