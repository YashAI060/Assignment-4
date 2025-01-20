#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {

    float fuelNeeded = distance / fuelAverage;

    float totalCost = fuelNeeded * fuelPrice;
    return totalCost;
}

int main() {
    float distance, fuelAverage, fuelPrice;
    
    printf("Enter the total trip distance (in km): ");
    scanf("%f", &distance);
    
    printf("Enter the vehicle's fuel consumption (in km/liter): ");
    scanf("%f", &fuelAverage);
    
    printf("Enter the current fuel price (in PKR per liter): ");
    scanf("%f", &fuelPrice);
    
    float totalFuelCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    
    printf("Total Fuel Cost = %.2f PKR\n", totalFuelCost);
    
    return 0;
}