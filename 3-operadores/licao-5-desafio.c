//DESAFIO - OPERADORES DE ATRIBUIÇÃO
#include <stdio.h>

int main() {
    int num = 10;
    
    // 1. Adicione 5 a num usando o operador += e imprima o resultado
    num += 5;
    printf("After += 5: %d\n", num);

    // 2. Subtraia 3 de num usando o operador -= e imprima o resultado
    num -= 3;
    printf("After -= 3: %d\n", num);

    // 3. Multiplique num por 2 usando o operador *= e imprima o resultado
    num *= 2;
    printf("After *= 2: %d\n", num);

    // 4. Divida num por 3 usando o operador /= e imprima o resultado
    num /= 3;
    printf("After /= 3: %d\n", num);

    // 5. Obtenha o resto de num dividido por 4 usando o operador %= e imprima o resultado
    num %= 4;
    printf("After %%= 4: %d\n", num);

    // Lembre-se de usar %% em sua instrução printf para exibir o símbolo %!
    
    return 0;
}