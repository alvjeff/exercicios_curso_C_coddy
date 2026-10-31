#include <stdio.h>

int main() {
    // Inicialize as variáveis
    int isSunny = 1;
    float windSpeed = 5.4;
    int temperature = 23;
    int solarPanelOutput = 9;
    int isCloudy = 0;
    
    // Crie a expressão lógica
    int isGoodDay = (isSunny >=1) && (windSpeed < 10) && (solarPanelOutput < 15) && (temperature > 20 || isCloudy == 0);
    
    // Não altere o código abaixo
    if (isGoodDay) {
        printf("Good day for solar energy\n");
    } else {
        printf("Not ideal for solar energy\n");
    }
    
    return 0;
}


/**
Crie um programa para decidir se é um bom dia para a produção de energia por painéis solares

Inicialize estas variáveis:

    isSunny com o valor 1 (verdadeiro)
    windSpeed com o valor 5.4
    temperature com o valor 23
    solarPanelOutput com o valor 9
    isCloudy com o valor 0 (falso)

Crie uma expressão lógica que verifique TODAS estas condições:

    Está ensolarado
    A velocidade do vento é menor que 10
    A produção do painel solar é menor que 15
    A temperatura está acima de 20 OU não há nuvens

Imprima "Good day for solar energy" se todas as condições forem atendidas; caso contrário, imprima "Not ideal for solar energy".
*/