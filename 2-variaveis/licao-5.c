#include <stdio.h>

int main() {
    // Escreva seu código aqui
    float celsius;
    double fahrenheit;
    celsius = 25.0f;
    fahrenheit = (celsius * 9.0/5.0) + 32.0;

    printf("%.1f degrees Celsius is equal to %.1f degrees Fahrenheit", celsius, fahrenheit);
    return 0;
}