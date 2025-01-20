#include <stdio.h>
#include <string.h>

float internetPackageCost(int GB, char network[]) {
    float cost = 0.0;

    if (strcmp(network, "Zong") == 0) {
        cost = GB * 100; // Zong: 100 PKR per 1 GB
    } else if (strcmp(network, "Jazz") == 0) {
        cost = GB * 120; // Jazz: 120 PKR per 1 GB
    } else if (strcmp(network, "Telenor") == 0) {
        cost = GB * 90;  // Telenor: 90 PKR per 1 GB
    } else {
        printf("Invalid network provider.\n");
    }

    return cost;
}

int main() {
    int GB;
    char network[20];

    printf("Enter the amount of data (in GB): ");
    scanf("%d", &GB);
    
    printf("Enter the network provider (Zong, Jazz, Telenor): ");
    scanf("%s", network);
    
    float cost = internetPackageCost(GB, network);
    
    if (cost > 0) {
        printf("Cost = %.2f PKR\n", cost);
    }
    
    return 0;
}