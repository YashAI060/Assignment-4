#include <stdio.h>

float convertCurrency(float amount, char currencyType, float exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    float amount, exchangeRate;
    char currencyType;

    printf("Enter the amount: ");
    scanf("%f", &amount);
    
    printf("Enter the currency type (U for USD, S for SAR, A for AED): ");
    scanf(" %c", &currencyType); 
    printf("Enter the exchange rate to PKR: ");
    scanf("%f", &exchangeRate);
    
    float pkrAmount = convertCurrency(amount, currencyType, exchangeRate);
    
    printf("PKR = %.2f\n", pkrAmount);
    
    return 0;
}
