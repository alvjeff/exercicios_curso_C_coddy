#include <stdio.h>
#define MAX_SCORE 100

int main() {
    // Declare e inicialize as variáveis
    int age = 25;
    float price = 19.99;
    char grade = 'A';

    // Calculate discounted price
    float discounted_price = price - (price * 15 / MAX_SCORE);

    // Converta para inteiro usando casting
    int rounded_price = (int) discounted_price;


    // Imprima todas as variáveis
    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discounted_price);
    printf("Rounded Price: $%d\n", rounded_price);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);
    
    return 0;
}