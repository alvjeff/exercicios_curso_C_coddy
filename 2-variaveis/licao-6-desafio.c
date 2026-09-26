#include <stdio.h>

int main(){
    float radius;
    double pi, volume;
    // Escreva seu código aqui    

    pi = 3.14159;
    radius = 1.5f;

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("The volume of a sphere with radius %.2f is %.2lf cubic units\n", radius, volume);
    return 0;

}