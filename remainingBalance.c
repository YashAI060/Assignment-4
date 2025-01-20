#include <stdio.h>

float remainingBalance(float amount) {
    float fed = amount * 0.195;
    float serviceCharges = amount * 0.10;
    float afterTaxBalance = amount - (fed + serviceCharges);
    return afterTaxBalance;
}

int main() {
    float amount;

    printf("Enter the recharge amount (in PKR): ");
    scanf("%f", &amount);
    
    float availableBalance = remainingBalance(amount);
    
    printf("Available Balance = %.2f PKR\n", availableBalance);
    
    return 0;
}