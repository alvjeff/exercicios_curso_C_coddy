/*DESAFIO*/

#include <stdio.h>
int main() {
    // Defina as variáveis aqui
    int age = 85;
    int isMember = 0;
    int isEligible;
    
    // Crie a expressão booleana aqui
    if ((age >= 65) || isMember){
        isEligible = 1;
    }
    
    // Imprima o resultado
    printf("Eligible for discount? %d\n", isEligible);
    
    return 0;
}