#include <stdio.h>

int main() {
    // Declare e inicialize as variáveis aqui
    int number = 17;

    // Calcule o resto
    int remainder = number % 5;

    // Verifique se o número é par ou ímpar
    int is_even;
    if(remainder == 0){
        is_even = 1;
    } 
    else{
        is_even = 0;
    }

    // Imprima os resultados
    printf("Number: %d\n", number);
    printf("Remainder when divided by 5: %d\n", remainder);
    printf("%d, is even? %d\n", number, is_even);
    
    return 0;
}