#include <stdio.h>

int checkEligibility(float gpa, int creditHours, int hasViolations, int hasRecommendations) {
    // Escreva seu código aqui para verificar a elegibilidade
    int Eligibility = (gpa >= 3.5 || hasRecommendations) && creditHours >= 60 && !hasViolations;

    // Retorne 1 se elegível, 0 se não elegível
    return Eligibility;
}

int main() {
    float gpa;
    int creditHours, hasViolations, hasRecommendations;
    
    // Leia os valores de entrada
    scanf("%f", &gpa);
    scanf("%d", &creditHours);
    scanf("%d", &hasViolations);
    scanf("%d", &hasRecommendations);
    
    // Verifique a elegibilidade
    if (checkEligibility(gpa, creditHours, hasViolations, hasRecommendations)) {
        printf("The student is eligible for the scholarship.\n");
    } else {
        printf("The student is not eligible for the scholarship.\n");
    }
    
    return 0;
}

/*


*/