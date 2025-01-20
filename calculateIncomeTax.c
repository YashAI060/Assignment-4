#include <stdio.h>

void showLoadSheddingSchedule(char city[]) {
    printf("Load Shedding Schedule for %s:\n", city);
    
    printf("Monday: 6 AM - 8 AM, 6 PM - 8 PM\n");
    printf("Tuesday: 7 AM - 9 AM, 5 PM - 7 PM\n");
    printf("Wednesday: 6 AM - 8 AM, 6 PM - 8 PM\n");
    printf("Thursday: 7 AM - 9 AM, 5 PM - 7 PM\n");
    printf("Friday: 6 AM - 8 AM, 6 PM - 8 PM\n");
    printf("Saturday: 7 AM - 9 AM, 5 PM - 7 PM\n");
    printf("Sunday: 6 AM - 8 AM, 6 PM - 8 PM\n");
}

int main() {
    char city[50];

    printf("Enter your city name: ");
    scanf("%49s", city);
    
    showLoadSheddingSchedule(city);
    
    return 0;
}