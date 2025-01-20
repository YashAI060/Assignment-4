#include <stdio.h>
#include <string.h>

float calculateTrainFare(char class[], float distance) {
    float fare = 0.0;

    if (strcmp(class, "Economy") == 0) {
        fare = distance * 5;
    } else if (strcmp(class, "Business") == 0) {
        fare = distance * 10;
    } else if (strcmp(class, "First") == 0) {
        fare = distance * 15;
    } else {
        printf("Invalid class type.\n");
    }

    return fare;
}

int main() {
    char class[20];
    float distance;
    float fare;

    printf("Enter the distance (in km): ");
    scanf("%f", &distance);
    
    printf("Enter the class (Economy, Business, First): ");
    scanf("%s", class);
    
    fare = calculateTrainFare(class, distance);
    
    if (fare > 0) {
        printf("Fare = %.2f PKR\n", fare);
    } else {
        printf("Unable to calculate fare due to invalid class.\n");
    }
    
    return 0;
}