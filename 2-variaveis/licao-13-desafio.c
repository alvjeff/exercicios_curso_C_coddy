/*
Escreva um programa que:

    Declare uma variável double result e atribua a ela o valor 5.65
    Declare uma variável int grade
    Atribua o valor de result a grade usando conversão explícita de tipo
    Imprima o valor de grade com a mensagem "The grade is: " usando printf
*/

#include <stdio.h>

int main() {
    double result = 5.65;
    
    // Use casting explícito para converter result (double) para grade (int)
    int grade = (int)result;

    printf("The grade is: %d\n", grade);
    
    return 0;
}