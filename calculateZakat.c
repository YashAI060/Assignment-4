#include <stdio.h>

float calculateZakat(float totalWealth, float goldRate, float silverRate) {
    float nisabGold = 87.48 * goldRate;
    float nisabSilver = 612.36 * silverRate;

    if (totalWealth > nisabGold || totalWealth > nisabSilver) {
        return totalWealth * 0.025;
    } else {
        return 0.0;
    }
}

int main() {
    float totalWealth, goldRate, silverRate;

    printf("Enter your total wealth (in PKR): ");
    scanf("%f", &totalWealth);
    
    printf("Enter the current rate of gold (in PKR per gram): ");
    scanf("%f", &goldRate);
    
    printf("Enter the current rate of silver (in PKR per gram): ");
    scanf("%f", &silverRate);
    
    float zakatPayable = calculateZakat(totalWealth, goldRate, silverRate);
    
    if (zakatPayable > 0) {
        printf("Zakat Payable = %.2f PKR\n", zakatPayable);
    } else {
        printf("No Zakat Payable as total wealth is below the Nisab threshold.\n");
    }
    
    return 0;
}